# RLFight Engine

## Usage

Create a build directory in the project root if it does not already exist.
```
mkdir build
```

Navigate to the build directory and run CMake to generate a native build system.
```
cd build
cmake ../
```

Then call that build system to compile & link the project.
```
cmake --build .
```

Use the built `EngineTest` as needed.
```
./EngineTest 123
```
