//
//  NSTimer+Mystic.h
//  Mystic
//
//  Created by travis weerts on 9/17/13.
//  Copyright (c) 2013 Blackpulp. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSTimer (Mystic)
+ (NSDate *) start;
+ (NSTimeInterval) stamp;
+ (NSTimeInterval) end;
+ (NSTimeInterval) stamp:(NSString *)format;
+ (NSTimeInterval) sinceLast:(NSString *)format;
+ (NSTimeInterval) end:(NSString *)format;
+ (NSTimeInterval) sinceStart:(NSString *)format;

@end
