// RUN: rm -rf %t && mkdir -p %t/docs %t/build
// RUN: clang-doc --format=html --doxygen --output=%t/docs --executor=standalone %s
/**
 * @brief For specifying RGB colors
 */
enum Color {
  Red, // Red enums
  Green, // Green enums
  Blue // Blue enums
};