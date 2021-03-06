/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:59 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/terminusd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NRIDSKMOutstandingQuery : NSObject {

	BOOL _hasQueriedIDS;
	unsigned char _minDataProtectionClass;
	/*^block*/id _completionBlock;

}

@property (assign,nonatomic) BOOL hasQueriedIDS;                                //@synthesize hasQueriedIDS=_hasQueriedIDS - In the implementation block
@property (assign,nonatomic) unsigned char minDataProtectionClass;              //@synthesize minDataProtectionClass=_minDataProtectionClass - In the implementation block
@property (nonatomic,copy) id completionBlock;                                  //@synthesize completionBlock=_completionBlock - In the implementation block
-(void)setCompletionBlock:(id)arg1 ;
-(id)completionBlock;
-(BOOL)hasQueriedIDS;
-(void)setHasQueriedIDS:(BOOL)arg1 ;
-(unsigned char)minDataProtectionClass;
-(void)setMinDataProtectionClass:(unsigned char)arg1 ;
@end

