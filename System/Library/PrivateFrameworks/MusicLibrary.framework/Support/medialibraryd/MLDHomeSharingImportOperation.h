/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:46:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Support/medialibraryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <medialibraryd/medialibraryd-Structs.h>
#import <medialibraryd/MLDDAAPImportOperation.h>

@class ML3EntityReplacer;

@interface MLDHomeSharingImportOperation : MLDDAAPImportOperation {

	ML3EntityReplacer* _containerReplacer;
	int _playlistNameOrder;

}
-(void)main;
-(unsigned long long)importSource;
-(shared_ptr<MLDDAAPImportItem>*)importItemFromDAAPElement:(shared_ptr<MLD::Element>*)arg1 ;
-(shared_ptr<MLDDAAPImportItem>*)containerImportItemFromDAAPElement:(shared_ptr<MLD::Element>*)arg1 withTrackIds:(vector<long long, std::__1::allocator<long long> >*)arg2 trackPersonIdentifiers:(vector<std::__1::unordered_set<std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > >, std::__1::allocator<std::__1::unordered_set<std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > > > >*)arg3 ;
-(void)updateImportProgress:(float)arg1 ;
-(BOOL)_performHomeSharingImportWithTransaction:(id)arg1 ;
@end
