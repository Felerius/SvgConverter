#ifndef SVG_CONVERTER_MATH_DEFS_H_
#define SVG_CONVERTER_MATH_DEFS_H_

#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Geometry>

/**
 * An SVG affine transformation.
 */
using Transform = Eigen::AffineCompact2d;

using Vector = Eigen::Vector2d;

using Rect = Eigen::AlignedBox2d;

#endif  // SVG_CONVERTER_MATH_DEFS_H_
