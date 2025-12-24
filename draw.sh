#!/usr/bin/bash

qmk c2json keyboards/zsa/voyager/keymaps/vandalt/keymap.c | keymap parse --layer-names Base Sym Nav Mouse NoMod -c 10 -q - > assets/voyager_keymap.yaml
keymap draw assets/voyager_keymap.yaml > ./assets/voyager_keymap.ortho.svg
