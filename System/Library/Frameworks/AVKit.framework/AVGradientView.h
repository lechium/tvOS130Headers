/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, NSString, CAGradientLayer;

@interface AVGradientView : UIView

@property (nonatomic,copy) NSArray * colors; 
@property (nonatomic,copy) NSArray * locations; 
@property (assign,nonatomic) CGPoint startPoint; 
@property (assign,nonatomic) CGPoint endPoint; 
@property (nonatomic,copy) NSString * type; 
@property (nonatomic,readonly) CAGradientLayer * _gradientLayer; 
+(Class)layerClass;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(NSArray *)colors;
-(void)setColors:(NSArray *)arg1 ;
-(NSArray *)locations;
-(void)setLocations:(NSArray *)arg1 ;
-(CGPoint)startPoint;
-(void)setStartPoint:(CGPoint)arg1 ;
-(CGPoint)endPoint;
-(void)setEndPoint:(CGPoint)arg1 ;
-(void)setLeftToRight:(BOOL)arg1 ;
-(CAGradientLayer *)_gradientLayer;
@end
