
#ifndef TENSORFLOW_LITE_MICRO_DROOP_DETECTION_MODEL_SETTINGS_H_
#define TENSORFLOW_LITE_MICRO_DROOP_DETECTION_MODEL_SETTINGS_H_

// Keeping these as constant expressions allow us to allocate fixed-sized arrays
// on the stack for our working memory.

// All of these values are derived from the values used during model training,
// if you change your model you'll need to update these constants.
constexpr int kNumCols = 32;
constexpr int kNumRows = 32;
constexpr int kNumChannels = 1;

constexpr int kMaxImageSize = kNumCols * kNumRows * kNumChannels;

constexpr int kCategoryCount = 2;
constexpr int kDroopIndex = 0;
constexpr int kNoDroopIndex = 1;
extern const char* kCategoryLabels[kCategoryCount];

#endif  // TENSORFLOW_LITE_MICRO_DROOP_DETECTION_MODEL_SETTINGS_H_
