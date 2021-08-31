.PHONY: build

build:
	arduino-cli compile --fqbn esp32:esp32:firebeetle32 . -u -p $(port)