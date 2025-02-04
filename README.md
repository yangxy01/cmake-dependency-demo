---

# cmake-dependency-demo 项目

## 项目简介
本项目是一个基于 CMake 增量编译的示例代码。

---

## 构建步骤

### 1. 清理并创建构建目录
使用以下命令清理旧的构建文件并创建新的构建目录：
```bash
rm -rf build && mkdir -p build && cd build
```

- `rm -rf build`：删除旧的 `build` 目录（如果存在）。
- `mkdir -p build`：创建新的 `build` 目录。
- `cd build`：进入 `build` 目录。

### 2. 生成构建系统
使用 CMake 生成构建系统：
```bash
cmake ..
```

- `cmake ..`：在 `build` 目录中运行 CMake，指定源代码目录为上一级目录（`..`）。
- 该命令会生成 Makefile 或其他构建文件（取决于系统配置）。

### 3. 编译项目
使用 `make` 进行编译：
```bash
make -j4
```

- `make -j4`：使用 4 个线程并行编译项目。
- `-j4` 表示启用 4 个并行任务，可以根据 CPU 核心数调整该值。

### 4. 运行示例服务器
编译完成后，运行生成的服务器程序：
```bash
./svr/MyServer  # 此时在build目录下
```

- `./svr/MyServer`：运行 `MyServer` 可执行文件。

---
