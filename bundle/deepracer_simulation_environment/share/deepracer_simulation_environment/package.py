# template generated by /usr/local/lib/python3.6/dist-packages/colcon_python_shell/shell/python_shell.py
# This script extends the environment for this package.
import pathlib

# assumes colcon_current_prefix has been injected into globals by caller
assert colcon_current_prefix


def prepend_unique_path(envvar, subdirectory):
    global colcon_current_prefix
    import os
    paths = os.environ.get(envvar, '').split(os.pathsep)

    # If subdirectory is relative, it is relative to prefix
    new_path = str(pathlib.Path(colcon_current_prefix, subdirectory).resolve())

    new_paths = [new_path, *(p for p in paths if p != new_path)]

    os.environ[envvar] = os.pathsep.join(new_paths)


# source python hooks
for exe, args in [('share/deepracer_simulation_environment/hook/cmake_prefix_path.py', []), ('share/deepracer_simulation_environment/hook/pkg_config.py', []), ('share/deepracer_simulation_environment/hook/ros_package_path.py', []), ('share/deepracer_simulation_environment/hook/python2path.py', []), ('share/deepracer_simulation_environment/hook/pkg_config_path.py', []), ('share/deepracer_simulation_environment/hook/pkg_config_path_multiarch.py', [])]:
    exec(pathlib.Path(colcon_current_prefix, exe).read_bytes())
