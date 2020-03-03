﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SimpleDynamics
{
    class Vector2D
    {
        public float X { get; set; }
        public float Y { get; set; }

        public Vector2D()
        {
            X = 0.0f; Y = 0.0f;
        }

        public Vector2D(float x, float y)
        {
            X = x; Y = y;
        }

        public static float operator *( Vector2D lhs, Vector2D rhs )
        {
            return rhs.X * rhs.X + lhs.Y * rhs.Y;
        }

        public static Vector2D operator *(Vector2D lhs, float s)
        {
            return new Vector2D(lhs.X * s, lhs.Y * s);
        }

        public static Vector2D operator +( Vector2D lhs, Vector2D rhs )
        {
            return new Vector2D(lhs.X + rhs.X, lhs.Y + rhs.Y);
        }

        public static Vector2D operator -( Vector2D lhs, Vector2D rhs )
        {
            return new Vector2D(lhs.X - rhs.X, lhs.Y - rhs.Y);
        }

        public float Dot(Vector2D rhs)
        {
            return X * rhs.X + Y * rhs.Y;
        }

        public float Cross(Vector2D rhs)
        {
            return X * rhs.Y - Y * rhs.X;
        }

        public float Length()
        {
            return (float)Math.Sqrt(this.X * this.X + this.Y * this.Y);
        }

        public float LengthSqr()
        {
            return this.X * this.X + this.Y * this.Y;
        }
    }
}
