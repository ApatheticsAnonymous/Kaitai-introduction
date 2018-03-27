# Kaitai-introduction
Training materials on a Kaitai Struct introduction workshop

# Contents

* doc
* Samples
* src

# Building
```
git clone https://github.com/ApatheticsAnonymous/Kaitai-introduction.git
```

## Get Kaitai-compiler

### Linux

```
sudo apt-key adv --keyserver hkp://pool.sks-keyservers.net --recv 379CE192D401AB61
echo "deb https://dl.bintray.com/kaitai-io/debian jessie main" | sudo tee /etc/apt/sources.list.d/kaitai.list
sudo apt-get update
sudo apt-get install kaitai-struct-compiler
```

### macOS

```brew install kaitai-struct-compiler
```
### Windows


```
cd Kaitai-introduction
mkdir build; cd build
```
```
cmake ..

make
```



# Resources

https://kaitai.io

http://kaitai.io/#download

Web IDE: https://ide.kaitai.io/

Docs: http://doc.kaitai.io/