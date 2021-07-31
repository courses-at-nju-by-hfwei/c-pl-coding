# ncurses

- [ ] `gcc xxx.c -lncurses` in `CMakeLists.txt`
  -
  Solution: [How to properly link libraries with cmake? @ stackoverflow](https://stackoverflow.com/a/39600062/1833118)
    - `target_link_libraries(xxx -lncurses)`
- [ ] `Error opening terminal: unknown`
    - [ ] 
      Reason: [How do I fix opening terminal error with c++ ncurses @ stackoverflow](https://stackoverflow.com/a/53459342/1833118)
    - [ ] [How to properly set environment variable TERM in CLion @ stackoverflow](https://stackoverflow.com/a/42264903/1833118)
        - Issues: Terminal 中显示乱码

## `basics/`

- [ ] `mouse.c`: does not work yet

## `panels/`

- [ ] `panel-moving-resizing`
    - [ ] code to be refactored
    - [ ] not interactively friendly

# `menus/`

- [ ] `Enter` in `menu-multival`, `menu-options`, and `menu-user-pointer` does not work

# `forms/`

- [ ] `form-basics`: `KEY-LEFT` and `KEY-RIGHT`
