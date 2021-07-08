
// Provides an interface to take an action based on the output from the droop
// detection model.

#ifndef TENSORFLOW_LITE_MICRO_DROOP_DETECTION_DETECTION_RESPONDER_H_
#define TENSORFLOW_LITE_MICRO_DROOP_DETECTION_DETECTION_RESPONDER_H_

#include "tensorflow/lite/c/common.h"
#include "tensorflow/lite/micro/micro_error_reporter.h"

// Called every time the results of a person detection run are available. The
// `person_score` has the numerical confidence that the captured image contains
// a person, and `no_person_score` has the numerical confidence that the image
// does not contain a person. Typically if person_score > no person score, the
// image is considered to contain a person.  This threshold may be adjusted for
// particular applications.
void RespondToDetection(tflite::ErrorReporter* error_reporter,
                        int8_t droop_score, int8_t no_droop_score);

#endif  // TENSORFLOW_LITE_MICRO_DROOP_DETECTION_DETECTION_RESPONDER_H_
