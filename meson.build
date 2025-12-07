project(
  'gtkmm-empty-app',
  'cpp',
  version : '0.1',
  meson_version : '>= 1.3.0',
  default_options : ['warning_level=3', 'cpp_std=c++23'],
)

deps = [
  dependency('gtkmm-4.0')
]

src = [
  './src/main.cpp',
]

exe = executable(
  'gtkmm',
  [src],
  install : true,
  dependencies : deps,
)

# test('x1', exe)
