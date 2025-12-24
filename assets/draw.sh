#!/usr/bin/bash

qmk c2json keyboards/zsa/voyager/keymaps/vandalt/keymap.c | keymap -c ./assets/keymap_drawer.config.yaml parse --layer-names Base Sym Nav Media Mouse NoMod -c 10 -q - > assets/voyager_keymap.yaml
keymap draw assets/voyager_keymap.yaml assets/combos.yaml > ./assets/voyager_keymap.ortho.svg
