///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBSerializableProtocol.h"
#import <Foundation/Foundation.h>

@class DBSHARINGSharedFolderAccessError;

#pragma mark - API Object

///
/// The `UpdateFolderPolicyError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and deserialize instance
/// methods), which is required for all Obj-C SDK API route objects.
///
@interface DBSHARINGUpdateFolderPolicyError : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The `DBSHARINGUpdateFolderPolicyErrorTag` enum type represents the possible tag states with
/// which the `DBSHARINGUpdateFolderPolicyError` union can exist.
typedef NS_ENUM(NSInteger, DBSHARINGUpdateFolderPolicyErrorTag) {
  /// (no description).
  DBSHARINGUpdateFolderPolicyErrorAccessError,

  /// `memberPolicy` in `DBSHARINGUpdateFolderPolicyArg` was set even though user is not on a
  /// team.
  DBSHARINGUpdateFolderPolicyErrorNotOnTeam,

  /// Team policy is more restrictive than `memberPolicy` in `DBSHARINGShareFolderArg`.
  DBSHARINGUpdateFolderPolicyErrorTeamPolicyDisallowsMemberPolicy,

  /// The current account is not allowed to select the specified `sharedLinkPolicy` in
  /// `DBSHARINGShareFolderArg`.
  DBSHARINGUpdateFolderPolicyErrorDisallowedSharedLinkPolicy,

  /// The current user does not have permission to perform this action.
  DBSHARINGUpdateFolderPolicyErrorNoPermission,

  /// (no description).
  DBSHARINGUpdateFolderPolicyErrorOther,

};

/// Represents the union's current tag state.
@property(nonatomic, readonly) DBSHARINGUpdateFolderPolicyErrorTag tag;

/// (no description). @note Ensure the `isAccessError` method returns true before accessing,
/// otherwise a runtime exception will be raised.
@property(nonatomic, readonly) DBSHARINGSharedFolderAccessError * _Nonnull accessError;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "access_error".
///
/// @param accessError (no description).
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithAccessError:(DBSHARINGSharedFolderAccessError * _Nonnull)accessError;

///
/// Initializes union class with tag state of "not_on_team".
///
/// Description of the "not_on_team" tag state: `memberPolicy` in `DBSHARINGUpdateFolderPolicyArg`
/// was set even though user is not on a team.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithNotOnTeam;

///
/// Initializes union class with tag state of "team_policy_disallows_member_policy".
///
/// Description of the "team_policy_disallows_member_policy" tag state: Team policy is more
/// restrictive than `memberPolicy` in `DBSHARINGShareFolderArg`.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithTeamPolicyDisallowsMemberPolicy;

///
/// Initializes union class with tag state of "disallowed_shared_link_policy".
///
/// Description of the "disallowed_shared_link_policy" tag state: The current account is not allowed
/// to select the specified `sharedLinkPolicy` in `DBSHARINGShareFolderArg`.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithDisallowedSharedLinkPolicy;

///
/// Initializes union class with tag state of "no_permission".
///
/// Description of the "no_permission" tag state: The current user does not have permission to
/// perform this action.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithNoPermission;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithOther;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "access_error".
///
/// @note Call this method and ensure it returns true before accessing the `accessError` property,
/// otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "access_error".
///
- (BOOL)isAccessError;

///
/// Retrieves whether the union's current tag state has value "not_on_team".
///
/// @return Whether the union's current tag state has value "not_on_team".
///
- (BOOL)isNotOnTeam;

///
/// Retrieves whether the union's current tag state has value "team_policy_disallows_member_policy".
///
/// @return Whether the union's current tag state has value "team_policy_disallows_member_policy".
///
- (BOOL)isTeamPolicyDisallowsMemberPolicy;

///
/// Retrieves whether the union's current tag state has value "disallowed_shared_link_policy".
///
/// @return Whether the union's current tag state has value "disallowed_shared_link_policy".
///
- (BOOL)isDisallowedSharedLinkPolicy;

///
/// Retrieves whether the union's current tag state has value "no_permission".
///
/// @return Whether the union's current tag state has value "no_permission".
///
- (BOOL)isNoPermission;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString * _Nonnull)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBSHARINGUpdateFolderPolicyError` union.
///
@interface DBSHARINGUpdateFolderPolicyErrorSerializer : NSObject

///
/// Serializes `DBSHARINGUpdateFolderPolicyError` instances.
///
/// @param instance An instance of the `DBSHARINGUpdateFolderPolicyError` API object.
///
/// @return A json-compatible dictionary representation of the `DBSHARINGUpdateFolderPolicyError`
/// API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBSHARINGUpdateFolderPolicyError * _Nonnull)instance;

///
/// Deserializes `DBSHARINGUpdateFolderPolicyError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGUpdateFolderPolicyError` API object.
///
/// @return An instantiation of the `DBSHARINGUpdateFolderPolicyError` object.
///
+ (DBSHARINGUpdateFolderPolicyError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end