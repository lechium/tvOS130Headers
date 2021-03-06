/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _TIUITextChecking;
#import <TextInputCore/TextInputCore-Structs.h>
@interface TITextChecker : NSObject {

	id<_TIUITextChecking> _checker;

}

@property (nonatomic,readonly) id<_TIUITextChecking> checker;              //@synthesize checker=_checker - In the implementation block
+(id)_UITextCheckerWithAsynchronousLoading:(BOOL)arg1 ;
-(id)init;
-(id)initWithAsynchronousLoading:(BOOL)arg1 ;
-(BOOL)doneLoading;
-(NSRange)checkSpellingOfString:(id)arg1 startingAt:(long long)arg2 language:(id)arg3 wrap:(BOOL)arg4 correction:(id*)arg5 ;
-(id<_TIUITextChecking>)checker;
@end

