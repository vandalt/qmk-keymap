# My QMK keymap

Built as an [external userspace](https://docs.qmk.fm/newbs_external_userspace).

## Layout

![Keyboard layout](./assets/voyager_keymap.ortho.svg)

### Generating the layout images

The layout images were generated with [keymap-drawer](https://github.com/caksoylar/keymap-drawer).
The images are from the voyager layout. My moonlander layout is a copy of it anyways.
To generate the images, you first need to convert the qmk keymap from c to json, and then from json to yaml:

```bash
qmk c2json keyboards/zsa/voyager/keymaps/vandalt/keymap.c | keymap parse -c 10 -q - > assets/voyager_keymap.yaml
```

The SVG image can then be generated with

```bash
keymap draw assets/voyager_keymap.yaml > voyager_keymap.ortho.svg
```

## Keyboards

I have configs for the ZSA Moonlander and ZSA Voyager.
Both were originally built with Oryx and edited so they would compile with the latest QMK.

I am aiming to put most of the configuration in a [userspace](https://docs.qmk.fm/feature_userspace) so that it is shared between the two keyboards.

Merging config files is fairly simple.
Merging the keymaps requires a bit more work. See <https://github.com/drashna/qmk_userspace/tree/master> and <https://github.com/getreuer/qmk-keymap>.
