/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:07 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSArray.h>

@class MLMultiArray;

@interface MLMultiArrayAsNSArrayWrapper : NSArray {

	MLMultiArray* _multiArray;

}

@property (retain) MLMultiArray * multiArray;              //@synthesize multiArray=_multiArray - In the implementation block
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)setMultiArray:(MLMultiArray *)arg1 ;
-(MLMultiArray *)multiArray;
-(id)initWrappingMultiArray:(id)arg1 ;
@end

