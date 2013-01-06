//
//  ZFHaversine
//
//  Copyright © 2012 Steve Foster <foster@flightblog.org>
//
//  Permission is hereby granted, free of charge, to any person obtaining
//  a copy of this software and associated documentation files (the “Software”),
//  to deal in the Software without restriction, including without limitation the
//  rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is furnished
//  to do so, subject to the following conditions:

//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.

//  THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
//  INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
//  PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
//  HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF
//  CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
//  OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#import <Foundation/Foundation.h>

@interface ZFHaversine : NSObject

@property (readonly) CGFloat latitude1;
@property (readonly) CGFloat longitude1;
@property (readonly) CGFloat latitude2;
@property (readonly) CGFloat longitude2;

- (id)initWithLatitude1:(CGFloat)latitude1
             longitude1:(CGFloat)longitude1
              latitude2:(CGFloat)latitude2
             longitude2:(CGFloat)longitude2;

- (CGFloat) kilos;
- (CGFloat) meters;
- (CGFloat) miles;
- (CGFloat) nauticalMiles;
- (CGFloat) feet;
- (CGFloat) inches;
- (CGFloat) centimeters;
- (CGFloat) millimeters;

@end
