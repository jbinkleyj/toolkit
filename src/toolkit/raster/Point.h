#ifndef TOOLKIT_RASTER_POINT_H
#define TOOLKIT_RASTER_POINT_H

#include <toolkit/core/core.h>
#include <toolkit/text/StringOutputStream.h>

namespace TOOLKIT_NS { namespace raster
{
	struct Point
	{
		int X, Y;

		Point(): X(0), Y(0)
		{ }

		Point(int x, int y): X(x), Y(y)
		{ }

		template<typename Size>
		explicit Point(Size size): X(size.Width), Y(size.Height)
		{ }

		Point operator - (Point p) const
		{ return Point(X - p.X, Y - p.Y); }

		Point operator - () const
		{ return Point(-X, -Y); }

		Point operator + (Point p) const
		{ return Point(X + p.X, Y + p.Y); }

		Point & operator -= (const Point & o)
		{
			X -= o.X;
			Y -= o.Y;
			return *this;
		}

		Point & operator += (const Point & o)
		{
			X += o.X;
			Y += o.Y;
			return *this;
		}

		bool IsZero() const
		{ return (X | Y) == 0; }

		void ToString(text::StringOutputStream & ss) const
		{ ss << X << ", " << Y; }

		TOOLKIT_DECLARE_SIMPLE_TOSTRING()
	};
}}


#endif
