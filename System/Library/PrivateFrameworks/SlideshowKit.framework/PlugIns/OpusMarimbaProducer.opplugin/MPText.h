/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:05 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMarimbaProducer.opplugin/OpusMarimbaProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusMarimbaProducer/OpusMarimbaProducer-Structs.h>
#import <OpusMarimbaProducer/NSCopying.h>

@protocol MPEffectSupport;
@class MCText, MPTextInternal, NSObject;

@interface MPText : NSObject <NSCopying> {

	MCText* _text;
	MPTextInternal* _internal;
	NSObject*<MPEffectSupport> _parent;

}
+(id)textWithAttributedString:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)setParent:(id)arg1 ;
-(void)setAttributedString:(id)arg1 ;
-(long long)index;
-(void)dump;
-(id)initWithAttributedString:(id)arg1 ;
-(id)text;
-(void)setText:(id)arg1 ;
-(id)action;
-(id)defaultString;
-(double)maxFontSize;
-(id)attributedString;
-(BOOL)isOriginal;
-(id)plainString;
-(double)displayTime;
-(id)fullDebugLog;
-(id)parentEffect;
-(void)copyStruct:(id)arg1 ;
-(id)nearestPlug;
-(void)checkForMaxFontSize;
-(void)checkForPlacesLabel;
-(id)subtitleSlide;
-(double)displayStartTime;
-(double)displayDuration;
-(double)textAreaAspectRatio;
-(void)setPlainString:(id)arg1 ;
@end

