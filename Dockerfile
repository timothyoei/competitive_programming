FROM ubuntu:20.04

WORKDIR /playground

ENV DEBIAN_FRONTEND=noninteractive

USER root

RUN apt-get update -y && apt-get upgrade -y

RUN apt-get install -y \
  g++

COPY . .