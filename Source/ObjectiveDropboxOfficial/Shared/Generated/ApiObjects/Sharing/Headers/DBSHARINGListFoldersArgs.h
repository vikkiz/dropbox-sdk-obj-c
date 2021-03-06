///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGFolderAction;
@class DBSHARINGListFoldersArgs;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ListFoldersArgs` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGListFoldersArgs : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The maximum number of results to return per request.
@property (nonatomic, readonly) NSNumber *limit;

/// A list of `FolderAction`s corresponding to `FolderPermission`s that should
/// appear in the  response's `permissions` in `DBSHARINGSharedFolderMetadata`
/// field describing the actions the  authenticated user can perform on the
/// folder.
@property (nonatomic, readonly, nullable) NSArray<DBSHARINGFolderAction *> *actions;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param limit The maximum number of results to return per request.
/// @param actions A list of `FolderAction`s corresponding to
/// `FolderPermission`s that should appear in the  response's `permissions` in
/// `DBSHARINGSharedFolderMetadata` field describing the actions the
/// authenticated user can perform on the folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithLimit:(nullable NSNumber *)limit actions:(nullable NSArray<DBSHARINGFolderAction *> *)actions;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `ListFoldersArgs` struct.
///
@interface DBSHARINGListFoldersArgsSerializer : NSObject

///
/// Serializes `DBSHARINGListFoldersArgs` instances.
///
/// @param instance An instance of the `DBSHARINGListFoldersArgs` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGListFoldersArgs` API object.
///
+ (nullable NSDictionary *)serialize:(DBSHARINGListFoldersArgs *)instance;

///
/// Deserializes `DBSHARINGListFoldersArgs` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGListFoldersArgs` API object.
///
/// @return An instantiation of the `DBSHARINGListFoldersArgs` object.
///
+ (DBSHARINGListFoldersArgs *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
