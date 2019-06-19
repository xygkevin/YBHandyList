//
//  YBHTableHeaderFooterConfig.h
//  YBHandyListDemo
//
//  Created by 杨波 on 2019/6/18.
//  Copyright © 2019 杨波. All rights reserved.
//

#import "YBHTableHeaderFooterProtocol.h"

NS_ASSUME_NONNULL_BEGIN

/**
 UITableView header/footer 配置协议
 */
@protocol YBHTableHeaderFooterConfig <NSObject>

@required

/** header/footer 类类型 */
- (Class<YBHTableHeaderFooterProtocol>)ybht_headerFooterClass;

@optional

/** header/footer 对应的数据模型 */
- (id)ybht_model;

/** header/footer 的默认高度 (优先级低于 YBHTableCellProtocol 代理方法返回的高度) */
- (NSNumber *)ybht_defaultHeight;

/** header/footer 的复用标识 */
- (NSString *)ybht_headerFooterReuseIdentifier;

@end


/**
 配置默认实现类，一般业务就够用了
 */
@interface YBHTableHeaderFooterConfig : NSObject <YBHTableHeaderFooterConfig>

/** header/footer 类类型 */
@property (nonatomic, strong) Class<YBHTableHeaderFooterProtocol> headerFooterClass;

/** header/footer 对应的数据模型 */
@property (nonatomic, strong) id model;

/** header/footer 的默认高度 (优先级低于 YBHTableCellProtocol 代理方法返回的高度) */
@property (nonatomic, copy) NSNumber *defaultHeight;

/** header/footer 的复用标识 */
@property (nonatomic, copy) NSString *headerFooterReuseIdentifier;

@end

NS_ASSUME_NONNULL_END
