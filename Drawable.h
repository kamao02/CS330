// Drawable.h
// Alex Martishius, John (Jack) Johnson, Jay Bondzeleske
//------------------------------------------------------------
// If Drawable.h is not defined, defines it
#ifndef _DRAWABLE_H
#define _DRAWABLE_H
//------------------------------------------------------------
// Includes the Base.h file
#include "Base.h"
//------------------------------------------------------------
// Forward declaration of scene
class Scene; 
//------------------------------------------------------------
// Drawable class that inherits the Base class
class Drawable:public Base {
//------------------------------------------------------------
public:
    // Default constructor
    Drawable () {}
	// Constructor for Drawable
    // s is the scene that holds this Drawable
	Drawable(Scene *s)
    {






    }
    // Declare the method to get the x-coordinate.
    int getX();
    // Declare the method to get the y-coordinate.
    int getY();
    // Declare the method to set the x-coordinate.
    // Set to the passed value variable
    void setX( int value );
    // Declare the method to set the y-coordinate.
    // Set to the passed value variable
    void setY( int value );
    // Setters and getters for the killsside, killstop, killsbottom, and points
    bool killsFromBottom() const { return killsBottom_; }
	bool killsFromSide() const { return killsSide_; }
    bool killsFromTop() const { return killsTop_; }
    int getPoints() const { return points_; }
//------------------------------------------------------------
private:
    // Determines if it kills Mario from the side, top, and bottom
    bool killsBottom_, killsSide_, killsTop_;
    // Integer number for the points, x coordinate, y coordinate
    int points_, xCoor_, yCoor_;
    // Pointer for the scene
    Scene *scene_;

};

#endif