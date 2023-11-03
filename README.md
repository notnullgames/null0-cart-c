# null0 template cart (C)

This is a quickstart-template for [null0](https://notnullgames.vercel.app/null0). Use it to quickly create your game.

- To get info run `make`.
- Use docker for a complete setup, with no need for any local tools installed:

```
docker run -it -v $(pwd):/cart konsumer/null0 make
```

## github

This repo has some Github Actions setup to build a demo-site for you, and add artifacts to your action-runs (so it will build your null0 cart on push.)