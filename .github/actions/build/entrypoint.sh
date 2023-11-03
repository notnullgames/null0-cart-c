#!/bin/bash

# this will be run in /github/actions with your code, inside konsumer/null0 docker

export GAME="${}1}"
make cart
cp index.html docs
echo "name=$GAME}" >> $GITHUB_OUTPUT
