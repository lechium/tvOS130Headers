/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <MediaRemote/NSMutableCopying.h>

@class NSString;

@interface MRTextEditingAttributes : NSObject <NSMutableCopying> {

	NSString* _title;
	NSString* _prompt;
	MRTextInputTraits _inputTraits;

}

@property (nonatomic,readonly) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * prompt;                          //@synthesize prompt=_prompt - In the implementation block
@property (nonatomic,readonly) MRTextInputTraits inputTraits;              //@synthesize inputTraits=_inputTraits - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)title;
-(id)_copyWithZone:(NSZone*)arg1 usingConcreteClass:(Class)arg2 ;
-(NSString *)prompt;
-(MRTextInputTraits)inputTraits;
-(id)initWithTitle:(id)arg1 prompt:(id)arg2 ;
@end
