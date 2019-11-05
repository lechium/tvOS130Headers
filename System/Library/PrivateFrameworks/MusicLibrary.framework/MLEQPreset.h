/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MLEQPreset : NSObject {

	NSString* _name;
	NSString* _localizedName;
	int _builtInPresetType;

}
+(id)eqPresetForBuiltInPresetType:(int)arg1 ;
+(id)eqPresetForName:(id)arg1 ;
-(id)name;
-(id)localizedName;
-(id)initWithBuiltInPresetType:(int)arg1 ;
-(int)builtInPresetType;
-(int)typeForAVController;
@end
