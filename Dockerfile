FROM ubuntu:bionic
RUN apt-get update && apt-get upgrade -y && apt-get install -y apt-utils gcc g++ cmake build-essential gdb

