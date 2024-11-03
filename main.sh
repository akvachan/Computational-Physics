#!/bin/sh

export PROJ="ComputationalPhysics"
rm -rf Build/
mkdir Build/
cd Build/
cmake ../
cmake --build .
cd ../
echo "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"
Build/$PROJ "$@"
