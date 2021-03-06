/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingServices.framework/Support/tvhomesharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <tvhomesharingd/TVHDMediaServerRequestOperation.h>

@interface TVHDMediaServerRentalCheckinOperation : TVHDMediaServerRequestOperation {

	BOOL _success;

}

@property (assign,nonatomic) BOOL success;              //@synthesize success=_success - In the implementation block
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1 ;
-(void)_handleResponse:(id)arg1 ;
-(id)initWithRequest:(id)arg1 requestSession:(id)arg2 ;
-(id)initWithRentalItem:(id)arg1 loginSession:(id)arg2 requestSession:(id)arg3 ;
@end

