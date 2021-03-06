/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:58 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/terminusd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <terminusd/terminusd-Structs.h>
@class NSString, NSMutableDictionary;

@interface BTPBrowser : NSObject {

	unsigned _srcIfIndex;
	unsigned _dstIfIndex;
	DNSServiceRef_tRef _sdRefBrowse;
	NSString* _bonjourType;
	NSMutableDictionary* _resolvers;

}

@property (assign,nonatomic) DNSServiceRef_tRef sdRefBrowse;               //@synthesize sdRefBrowse=_sdRefBrowse - In the implementation block
@property (assign,nonatomic) unsigned srcIfIndex;                          //@synthesize srcIfIndex=_srcIfIndex - In the implementation block
@property (assign,nonatomic) unsigned dstIfIndex;                          //@synthesize dstIfIndex=_dstIfIndex - In the implementation block
@property (nonatomic,retain) NSString * bonjourType;                       //@synthesize bonjourType=_bonjourType - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * resolvers;              //@synthesize resolvers=_resolvers - In the implementation block
-(void)dealloc;
-(BOOL)start;
-(void)stop;
-(NSMutableDictionary *)resolvers;
-(void)setResolvers:(NSMutableDictionary *)arg1 ;
-(id)initWithSrcIfIndex:(unsigned)arg1 dstIfIndex:(unsigned)arg2 bonjourType:(id)arg3 ;
-(void)handleReplyName:(id)arg1 type:(id)arg2 domain:(id)arg3 ifIndex:(unsigned)arg4 add:(BOOL)arg5 ;
-(DNSServiceRef_tRef)sdRefBrowse;
-(void)setSdRefBrowse:(DNSServiceRef_tRef)arg1 ;
-(unsigned)srcIfIndex;
-(void)setSrcIfIndex:(unsigned)arg1 ;
-(unsigned)dstIfIndex;
-(void)setDstIfIndex:(unsigned)arg1 ;
-(NSString *)bonjourType;
-(void)setBonjourType:(NSString *)arg1 ;
@end

