//
//  BOXBookmarkCommentsRequest.h
//  BoxContentSDK
//

#import "BOXRequestWithSharedLinkHeader.h"

@interface BOXBookmarkCommentsRequest : BOXRequestWithSharedLinkHeader

@property (nonatomic, readonly, strong) NSString *bookmarkID;

- (instancetype)initWithBookmarkID:(NSString *)bookmarkID;
- (void)performRequestWithCompletion:(BOXObjectsArrayCompletionBlock)completionBlock;
- (void)performRequestWithCached:(BOXObjectsArrayCompletionBlock)cacheBlock
                       refreshed:(BOXObjectsArrayCompletionBlock)refreshBlock;

@end
