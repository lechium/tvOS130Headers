/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, ACAccountStore;

@interface ABAccountScorer : NSObject {

	int _sourceID;
	int _defaultSourceID;
	double _score;
	NSString* _accountType;
	void* _addressBook;
	ACAccountStore* _accountStore;
	void* _account;

}

@property (assign,nonatomic) void* addressBook;                                          //@synthesize addressBook=_addressBook - In the implementation block
@property (nonatomic,retain) ACAccountStore * accountStore;                              //@synthesize accountStore=_accountStore - In the implementation block
@property (assign,nonatomic) void* account;                                              //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) int defaultSourceID;                                        //@synthesize defaultSourceID=_defaultSourceID - In the implementation block
@property (assign,nonatomic) double score;                                               //@synthesize score=_score - In the implementation block
@property (nonatomic,retain) NSString * accountType;                                     //@synthesize accountType=_accountType - In the implementation block
@property (nonatomic,readonly) NSString * accountTypeDescription; 
@property (nonatomic,readonly) NSString * accountDisambiguationDescription; 
@property (assign,nonatomic) int sourceID;                                               //@synthesize sourceID=_sourceID - In the implementation block
-(void)dealloc;
-(double)score;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(NSString *)accountType;
-(ACAccountStore *)accountStore;
-(void)setAccountType:(NSString *)arg1 ;
-(NSString *)accountTypeDescription;
-(int)sourceID;
-(void)setSourceID:(int)arg1 ;
-(void)setScore:(double)arg1 ;
-(void*)addressBook;
-(id)initWithAddressBook:(void*)arg1 accountStore:(id)arg2 account:(void*)arg3 defaultSourceID:(int)arg4 ;
-(void)calculateScore;
-(NSString *)accountDisambiguationDescription;
-(void)setAddressBook:(void*)arg1 ;
-(void*)account;
-(int)_findBestSourceID;
-(int)defaultSourceID;
-(void)setAccount:(void*)arg1 ;
-(void)setDefaultSourceID:(int)arg1 ;
@end
