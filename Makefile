GAME ?= 'mygame'

CC_WASM = clang --target=wasm32-wasi --sysroot=${WASI_SYSROOT} -Oz -I src

.PHONY: help
help: ## Show this help
	@grep -E '^[a-zA-Z0-9/._-]+:.*?## .*$$' $(MAKEFILE_LIST) | awk 'BEGIN {FS = ":.*?## "}; {printf "make \033[36m%-30s\033[0m %s\n", $$1, $$2}'

cart: ${GAME}.null0 ## Build your cart

${GAME}.wasm: src/main.c
	@mkdir -p docs
	@${CC_WASM} src/main.c -o docs/${GAME}.wasm

${GAME}.null0: ${GAME}.wasm
	@cd docs && cp $? main.wasm && zip -r $@ main.wasm && rm main.wasm && cd ../src && zip ../docs/$@ -r . -x *.h -x *.c -x .DS_Store

run: ## Run a local webserver to test out your game
	# TODO: curl index.html from a remote location, later
	# TODO: watch source for change, and rebuild
	@cp index.html docs && npx -y live-server docs

watch: ## Rebuild if files change
	@npx -y nodemon --exec "make cart" --watch src  -e "c h png jpg ttf"