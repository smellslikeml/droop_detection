# Droop Detection

*Read the [blog](https://smellslike.ml/posts/tf-microcontroller-challenge-droopthereitis/)*

![droop-demo](https://smellslike.ml/img/droop_example.gif)

Project "Droop, there it is" aims to reduce water consumption by triggering irrigation events only when drought stress is identified. A battery-powered Arduino Nano 33 BLE sense running an image classifier to identify plant "droopiness" can be deployed in fields without power to signal nearby irrigation equipment.

This tinyML use case features [Knowledge Distillation](https://arxiv.org/abs/1503.02531) to reduce a powerful image classifier for deployment on limited capacity devices.

## Materials

* [Arduino Nano 33 BLE Sense](https://www.arduino.cc/)
* [ArduCam](https://www.amazon.com/Arducam-Module-Megapixels-Arduino-Mega2560/dp/B012UXNDOY)
* [Micro-Lipo Battery Charger](https://www.adafruit.com/product/1904?gclid=Cj0KCQjw0K-HBhDDARIsAFJ6UGgpi7IiuNRmWmmaDTe_DDJPsVEQr3_ud31qKbyhxduTd1cWL0qsPGwaAh1EEALw_wcB)
* [LiPo battery](https://www.adafruit.com/product/1570)
* PCB board, wiring, and solder as necessary (or use a breadboard)

## Installation

Install tensorflow version `2.4.0` to train and deploy this example.  

```
pip install tensorflow==2.4.0
```

You'll also need the model conversion utility tool `xxd`. On Linux (Debian) systems, this can be installed via:

```
sudo apt-get update && sudo apt-get -qq install xxd
```

Finally, make sure you install the [Arduino IDE](https://www.arduino.cc/en/software).

Under `Tools > Manage Libraries...`, search for tensorflow and make sure to install "Version 2.4.0-ALPHA" and match the python installation. Install [ArduCam](https://www.amazon.com/Arducam-Module-Megapixels-Arduino-Mega2560/dp/B012UXNDOY) dependencies using [these instructions](https://github.com/tensorflow/tflite-micro/tree/main/tensorflow/lite/micro/examples/person_detection).

## Usage

To train and prepare your own model, run the `droop_detection.ipynb` notebook and update the model file found in `arduino/droop_detection/`

Connect the ArduCAM to the Arduino as follows:
|Arducam pin name|Arduino pin name|
|----------------|----------------|
|CS|D7 (unlabelled, immediately to the right of D6)|
|MOSI|D11|
|MISO|D12|
|SCK|D13|
|GND|GND (either pin marked GND is fine)|
|VCC|3.3 V|
|SDA|A4|
|SCL|A5|


In the Arduino IDE, load the `arduino/droop_detection/` example, connect your Arduino, and compile and upload!

In this example, we use a green flash to indicate droop, red for no droop, and blue to signal taking an inference step.

You can easily adapt this example to classify any set of labels! Simply make sure to update label names, label indices, and input parameters appropriately.

## References

* [tflite-micro](https://github.com/tensorflow/tflite-micro)
* [knowledge distillation notebook](https://keras.io/examples/vision/knowledge_distillation/)
