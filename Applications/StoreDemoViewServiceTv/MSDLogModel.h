/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:56:31 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/StoreDemoViewServiceTv.app/StoreDemoViewServiceTv
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <StoreDemoViewServiceTv/StoreDemoViewServiceTv-Structs.h>
@interface MSDLogModel : NSObject {

	_sFILE* _logFP;

}

@property (assign) _sFILE* logFP;              //@synthesize logFP=_logFP - In the implementation block
+(id)sharedInstance;
-(void)logMessage:(id)arg1 ;
-(void)logWithFormat:(id)arg1 andArgs:(char*)arg2 ;
-(_sFILE*)logFP;
-(void)setLogFP:(_sFILE*)arg1 ;
-(id)fileNameForTodayUnder:(id)arg1 prefix:(id)arg2 ;
-(BOOL)enableLogToFile:(id)arg1 ;
-(BOOL)enableLogToFilesUnder:(id)arg1 prefix:(id)arg2 expireDays:(long long)arg3 ;
@end

