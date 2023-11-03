#!/bin/bash

# this will be run in /github/workspace with your code, inside konsumer/null0 docker
# you can use it to publish a page and have your cart as a artifact

export GAME="${1}"
make cart
cp index.html build

echo "name=${GAME}" >> $GITHUB_OUTPUT
