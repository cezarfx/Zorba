/*
 * Copyright 2006-2012 The FLWOR Foundation.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
 
// ******************************************
// *                                        *
// * THIS IS A GENERATED FILE. DO NOT EDIT! *
// * SEE .xml FILE WITH SAME NAME           *
// *                                        *
// ******************************************

#ifndef ZORBA_RUNTIME_VISITORS_PLAN_ITER_VISITOR_H
#define ZORBA_RUNTIME_VISITORS_PLAN_ITER_VISITOR_H
#include <vector>
#include "common/common.h"
#include "zorbatypes/zorbatypes_decl.h"
#include <zorba/store_consts.h>
#include "zorbatypes/rchandle.h"
#include "zorbatypes/zstring.h"

namespace zorba{
    class NodeNameIterator;

    class NilledIterator;

    class FnStringIterator;

    class FnDataIterator;

    class BaseUriIterator;

    class DocumentUriIterator;

    class RootIterator;

    class ResolveUriIterator;

    class Base64DecodeIterator;

    class Base64EncodeIterator;

    class IsSameNodeIterator;

    class NodeBeforeIterator;

    class NodeAfterIterator;

    class ZorbaCreateCollectionIterator;

    class ZorbaDeleteCollectionIterator;

    class IsAvailableCollectionIterator;

    class AvailableCollectionsIterator;

    class FnCollectionIterator;

    class ZorbaCollectionIterator;

    class ZorbaCollectionNameIterator;

    class ZorbaIndexOfIterator;

    class ZorbaApplyInsertIterator;

    class ZorbaInsertAfterIterator;

    class ZorbaInsertBeforeIterator;

    class ZorbaInsertFirstIterator;

    class ZorbaInsertLastIterator;

    class ZorbaApplyInsertFirstIterator;

    class ZorbaApplyInsertLastIterator;

    class ZorbaApplyInsertBeforeIterator;

    class ZorbaApplyInsertAfterIterator;

    class ZorbaDeleteIterator;

    class ZorbaDeleteFirstIterator;

    class ZorbaDeleteLastIterator;

    class ZorbaEditIterator;

    class ZorbaInsertIterator;

    class ZorbaTruncateCollectionIterator;

    class IsAvailableIndexIterator;

    class AvailableIndexesIterator;

    class IsActivatedICIterator;

    class ActivatedICsIterator;

    class IsDeclaredCollectionIterator;

    class DeclaredCollectionsIterator;

    class IsDeclaredIndexIterator;

    class DeclaredIndexesIterator;

    class IsDeclaredICIterator;

    class DeclaredICsIterator;

    class FnURICollectionIterator;

    class CurrentDateTimeIterator;

    class CurrentDateIterator;

    class CurrentTimeIterator;

    class ImplicitTimezoneIterator;

    class DefaultCollationIterator;

    class CsvParseIterator;

    class CsvSerializeIterator;

    class CurrentDate;

    class CurrentDateTime;

    class CurrentTime;

    class MillisToDateTime;

    class ParseDate;

    class ParseDateTime;

    class ParseTime;

    class Timestamp;

    class UTCOffset;

    class DctxSnapshotIdIterator;

#ifdef ZORBA_WITH_DEBUGGER
    class DebugIterator;
#endif
    class YearsFromDurationIterator;

    class MonthsFromDurationIterator;

    class DaysFromDurationIterator;

    class HoursFromDurationIterator;

    class MinutesFromDurationIterator;

    class SecondsFromDurationIterator;

    class YearFromDatetimeIterator;

    class MonthFromDatetimeIterator;

    class DayFromDatetimeIterator;

    class HoursFromDatetimeIterator;

    class MinutesFromDatetimeIterator;

    class SecondsFromDatetimeIterator;

    class TimezoneFromDatetimeIterator;

    class YearFromDateIterator;

    class MonthFromDateIterator;

    class DayFromDateIterator;

    class TimezoneFromDateIterator;

    class HoursFromTimeIterator;

    class MinutesFromTimeIterator;

    class SecondsFromTimeIterator;

    class TimezoneFromTimeIterator;

    class ErrorIterator;

    class TraceIterator;

    class ReadLineIterator;

    class PrintIterator;

    class FunctionTraceIterator;

    class FetchContentIterator;

    class FetchContentBinaryIterator;

    class FetchContentTypeIterator;

    class FnPutIterator;

#ifndef ZORBA_NO_FULL_TEXT
    class CurrentCompareOptionsIterator;
#endif
#ifndef ZORBA_NO_FULL_TEXT
    class CurrentLangIterator;
#endif
#ifndef ZORBA_NO_FULL_TEXT
    class HostLangIterator;
#endif
#ifndef ZORBA_NO_FULL_TEXT
    class IsStemLangSupportedIterator;
#endif
#ifndef ZORBA_NO_FULL_TEXT
    class IsStopWordIterator;
#endif
#ifndef ZORBA_NO_FULL_TEXT
    class IsStopWordLangSupportedIterator;
#endif
#ifndef ZORBA_NO_FULL_TEXT
    class IsThesaurusLangSupportedIterator;
#endif
#ifndef ZORBA_NO_FULL_TEXT
    class IsTokenizerLangSupportedIterator;
#endif
#ifndef ZORBA_NO_FULL_TEXT
    class StemIterator;
#endif
#ifndef ZORBA_NO_FULL_TEXT
    class StripDiacriticsIterator;
#endif
#ifndef ZORBA_NO_FULL_TEXT
    class ThesaurusLookupIterator;
#endif
#ifndef ZORBA_NO_FULL_TEXT
    class TokenizeNodeIterator;
#endif
#ifndef ZORBA_NO_FULL_TEXT
    class TokenizeNodesIterator;
#endif
#ifndef ZORBA_NO_FULL_TEXT
    class TokenizerPropertiesIterator;
#endif
#ifndef ZORBA_NO_FULL_TEXT
    class TokenizeStringIterator;
#endif
    class FunctionLookupIterator;

    class FunctionNameIterator;

    class FunctionArityIterator;

    class FnForEachPairIterator;

    class FnFoldLeftIterator;

    class ActivateICIterator;

    class DeactivateICIterator;

    class CheckICIterator;

    class IndexKeysIterator;

    class MemSizeIterator;

    class JSONtoXMLInternal;

    class XMLtoJSONInternal;

    class JSONDecodeFromRoundtripIterator;

    class JSONEncodeForRoundtripIterator;

    class JSONParseIterator;

    class MultiObjectKeysIterator;

    class SingleObjectKeysIterator;

    class MultiObjectLookupIterator;

    class SingleObjectLookupIterator;

    class JSONObjectProjectIterator;

    class JSONObjectTrimIterator;

    class MultiArrayMembersIterator;

    class SingleArrayMembersIterator;

    class MultiArrayLookupIterator;

    class SingleArrayLookupIterator;

    class JSONArraySizeIterator;

    class JSONArrayFlattenIterator;

    class JSONNullIterator;

    class JSONObjectInsertIterator;

    class JSONArrayInsertIterator;

    class JSONDeleteIterator;

    class JSONReplaceValueIterator;

    class JSONRenameIterator;

    class JSONArrayAppendIterator;

    class JSONBoxIterator;

    class JSoundAnnotateIterator;

    class JSoundValidateIterator;

    class SqrtIterator;

    class ExpIterator;

    class Exp10Iterator;

    class LogIterator;

    class Log10Iterator;

    class SinIterator;

    class CosIterator;

    class TanIterator;

    class ArcSinIterator;

    class ArcCosIterator;

    class ArcTanIterator;

    class Atan2Iterator;

    class CoshIterator;

    class AcoshIterator;

    class FmodIterator;

    class LdexpIterator;

    class PowIterator;

    class SinhIterator;

    class AsinhIterator;

    class TanhIterator;

    class AtanhIterator;

    class PiNumberIterator;

    class IsInfIterator;

    class IsNaNIterator;

    class ModfIterator;

    class FrexpIterator;

    class NodePositionIterator;

    class IsAncestorPositionIterator;

    class IsFollowingSiblingPositionIterator;

    class IsFollowingPositionIterator;

    class IsInSubtreeOfPositionIterator;

    class IsDescendantPositionIterator;

    class IsPrecedingSiblingPositionIterator;

    class IsPrecedingPositionIterator;

    class IsChildPositionIterator;

    class IsAttributeOfPositionIterator;

    class IsParentPositionIterator;

    class IsPrecedingInDocumentOrderPositionIterator;

    class IsFollowingInDocumentOrderPositionIterator;

    class LevelPositionIterator;

    class IsAttributePositionIterator;

    class IsCommentPositionIterator;

    class IsDocumentPositionIterator;

    class IsElementPositionIterator;

    class IsProcessingInstructionPositionIterator;

    class IsTextPositionIterator;

    class IsSiblingPositionIterator;

    class InSameTreePositionIterator;

    class InCollectionPositionIterator;

    class InSameCollectionPositionIterator;

    class FnLocalNameIterator;

    class FnNamespaceUriIterator;

    class FnLangIterator;

    class FnHasChildrenIterator;

    class FnInnermostIterator;

    class FnOutermostIterator;

    class FnGenerateIdIterator;

    class IsAncestorIterator;

    class IsDescendantIterator;

    class IsParentIterator;

    class IsChildIterator;

    class IsFollowingIterator;

    class IsPrecedingIterator;

    class IsFollowingSiblingIterator;

    class IsPrecedingSiblingIterator;

    class LevelIterator;

    class LeastCommonAncestor;

    class FnPathIterator;

    class NodeCopyIterator;

    class AbsIterator;

    class CeilingIterator;

    class FloorIterator;

    class RoundIterator;

    class RoundHalfToEvenIterator;

    class FormatNumberIterator;

    class FormatIntegerIterator;

    class FnZorbaParseXmlFragmentIterator;

    class FnZorbaCanonicalizeIterator;

    class FnParseXmlFragmentIterator;

    class FnParseXmlIterator;

    class FnSerializeIterator;

    class ResolveQNameIterator;

    class QNameIterator;

    class QNameEqualIterator;

    class PrefixFromQNameIterator;

    class LocalNameFromQNameIterator;

    class NamespaceUriFromQNameIterator;

    class NamespaceUriForPrefixIterator;

    class InScopePrefixesIterator;

    class SeededRandomIterator;

    class RandomIterator;

    class UuidIterator;

    class ReferenceIterator;

    class HasReferenceIterator;

    class AssignReferenceIterator;

    class DereferenceIterator;

#ifndef ZORBA_NO_XMLSCHEMA
    class ValidateIterator;
#endif
    class ZorbaValidateInPlaceIterator;

    class ZorbaSchemaTypeIterator;

    class ZorbaIsValidatedIterator;

    class SctxBaseUriIterator;

    class SctxBoundarySpacePolicyIterator;

    class SctxConstructionModeIterator;

    class SctxCopyNamespacesModeIterator;

    class SctxDefaultCollationIterator;

    class SctxDefaultCollectionTypeIterator;

    class SctxDefaultFunctionNamespaceIterator;

    class SctxDefaultOrderIterator;

    class SctxFunctionAnnotationsIterator;

    class SctxFunctionArgumentsCountIterator;

    class SctxFunctionNamesIterator;

    class SctxFunctionsIterator;

    class SctxInScopeAttributeDeclarationsIterator;

    class SctxInScopeAttributeGroupsIterator;

    class SctxInScopeElementDeclarationsIterator;

    class SctxInScopeElementGroupsIterator;

    class SctxInScopeSchemaTypesIterator;

    class SctxInscopeVariablesIterator;

    class SctxOptionIterator;

    class SctxOrderingModeIterator;

    class SctxStaticallyKnownCollationsIterator;

    class SctxStaticallyKnownDocumentsIterator;

    class SctxStaticallyKnownDocumentTypeIterator;

    class SctxStaticallyKnownNamespaceBindingIterator;

    class SctxStaticallyKnownNamespacesIterator;

    class SctxXPath10CompatModeIterator;

    class SeqValueIntersectIterator;

    class SeqValueUnionIterator;

    class SeqValueExceptIterator;

    class FnConcatIterator;

    class FnIndexOfIterator;

    class FnEmptyIterator;

    class FnExistsIterator;

    class FnDistinctValuesIterator;

    class FnInsertBeforeIterator;

    class FnRemoveIterator;

    class FnReverseIterator;

    class FnSubsequenceIterator;

    class SubsequenceIntIterator;

    class SequencePointAccessIterator;

    class FnZeroOrOneIterator;

    class FnOneOrMoreIterator;

    class FnExactlyOneIterator;

    class FnDeepEqualIterator;

    class HashSemiJoinIterator;

    class SortSemiJoinIterator;

    class FnCountIterator;

    class FnAvgIterator;

    class FnSumIterator;

    class FnSumDoubleIterator;

    class FnSumFloatIterator;

    class FnSumDecimalIterator;

    class FnSumIntegerIterator;

    class OpToIterator;

    class FnIdIterator;

    class FnElementWithIdIterator;

    class FnIdRefIterator;

    class FnDocIterator;

    class FnDocAvailableIterator;

    class FnAvailableEnvironmentVariablesIterator;

    class FnEnvironmentVariableIterator;

    class FnUnparsedTextIterator;

    class FnUnparsedTextAvailableIterator;

    class FnUnparsedTextLinesIterator;

    class AvailableDocumentsIterator;

    class IsAvailableDocumentIterator;

    class PutDocumentIterator;

    class RemoveDocumentIterator;

    class RetrieveDocumentIterator;

    class MapCreateIterator;

    class MapDropIterator;

    class MapGetIterator;

    class MapInsertIterator;

    class MapDeleteIterator;

    class MapKeysIterator;

    class MapSizeIterator;

    class AvailableMapsIterator;

    class MapOptionsIterator;

    class CodepointsToStringIterator;

    class StringToCodepointsIterator;

    class CompareStrIterator;

    class CodepointEqualIterator;

    class ConcatStrIterator;

    class StringJoinIterator;

    class SubstringIterator;

    class SubstringIntOptIterator;

    class StringLengthIterator;

    class NormalizeSpaceIterator;

    class NormalizeUnicodeIterator;

    class UpperCaseIterator;

    class LowerCaseIterator;

    class TranslateIterator;

    class EncodeForUriIterator;

    class IriToUriIterator;

    class EscapeHtmlUriIterator;

    class ContainsIterator;

    class StartsWithIterator;

    class EndsWithIterator;

    class SubstringBeforeIterator;

    class SubstringAfterIterator;

    class FnMatchesIterator;

    class FnReplaceIterator;

    class FnTokenizeIterator;

    class FnAnalyzeStringIterator;

    class StringAnalyzeStringIterator;

    class StringMaterializeIterator;

    class StringIsStreamableIterator;

    class StringIsSeekableIterator;

    class StringSplitIterator;

    class DecodeURIIterator;

    class ParseURIIterator;

    class SerializeURIIterator;

    class XQDocContentIterator;


#include "runtime/visitors/plan_iter_visitor_types.h"
/**
 * Visitor to visit a PlanIterator tree.
 */
class PlanIterVisitor {
public:
  virtual ~PlanIterVisitor() { }

#include "runtime/visitors/plan_iter_visitor_decl.h"

    virtual void beginVisit ( const NodeNameIterator& ) = 0;
    virtual void endVisit   ( const NodeNameIterator& ) = 0;

    virtual void beginVisit ( const NilledIterator& ) = 0;
    virtual void endVisit   ( const NilledIterator& ) = 0;

    virtual void beginVisit ( const FnStringIterator& ) = 0;
    virtual void endVisit   ( const FnStringIterator& ) = 0;

    virtual void beginVisit ( const FnDataIterator& ) = 0;
    virtual void endVisit   ( const FnDataIterator& ) = 0;

    virtual void beginVisit ( const BaseUriIterator& ) = 0;
    virtual void endVisit   ( const BaseUriIterator& ) = 0;

    virtual void beginVisit ( const DocumentUriIterator& ) = 0;
    virtual void endVisit   ( const DocumentUriIterator& ) = 0;

    virtual void beginVisit ( const RootIterator& ) = 0;
    virtual void endVisit   ( const RootIterator& ) = 0;

    virtual void beginVisit ( const ResolveUriIterator& ) = 0;
    virtual void endVisit   ( const ResolveUriIterator& ) = 0;

    virtual void beginVisit ( const Base64DecodeIterator& ) = 0;
    virtual void endVisit   ( const Base64DecodeIterator& ) = 0;

    virtual void beginVisit ( const Base64EncodeIterator& ) = 0;
    virtual void endVisit   ( const Base64EncodeIterator& ) = 0;

    virtual void beginVisit ( const IsSameNodeIterator& ) = 0;
    virtual void endVisit   ( const IsSameNodeIterator& ) = 0;

    virtual void beginVisit ( const NodeBeforeIterator& ) = 0;
    virtual void endVisit   ( const NodeBeforeIterator& ) = 0;

    virtual void beginVisit ( const NodeAfterIterator& ) = 0;
    virtual void endVisit   ( const NodeAfterIterator& ) = 0;

    virtual void beginVisit ( const ZorbaCreateCollectionIterator& ) = 0;
    virtual void endVisit   ( const ZorbaCreateCollectionIterator& ) = 0;

    virtual void beginVisit ( const ZorbaDeleteCollectionIterator& ) = 0;
    virtual void endVisit   ( const ZorbaDeleteCollectionIterator& ) = 0;

    virtual void beginVisit ( const IsAvailableCollectionIterator& ) = 0;
    virtual void endVisit   ( const IsAvailableCollectionIterator& ) = 0;

    virtual void beginVisit ( const AvailableCollectionsIterator& ) = 0;
    virtual void endVisit   ( const AvailableCollectionsIterator& ) = 0;

    virtual void beginVisit ( const FnCollectionIterator& ) = 0;
    virtual void endVisit   ( const FnCollectionIterator& ) = 0;

    virtual void beginVisit ( const ZorbaCollectionIterator& ) = 0;
    virtual void endVisit   ( const ZorbaCollectionIterator& ) = 0;

    virtual void beginVisit ( const ZorbaCollectionNameIterator& ) = 0;
    virtual void endVisit   ( const ZorbaCollectionNameIterator& ) = 0;

    virtual void beginVisit ( const ZorbaIndexOfIterator& ) = 0;
    virtual void endVisit   ( const ZorbaIndexOfIterator& ) = 0;

    virtual void beginVisit ( const ZorbaApplyInsertIterator& ) = 0;
    virtual void endVisit   ( const ZorbaApplyInsertIterator& ) = 0;

    virtual void beginVisit ( const ZorbaInsertAfterIterator& ) = 0;
    virtual void endVisit   ( const ZorbaInsertAfterIterator& ) = 0;

    virtual void beginVisit ( const ZorbaInsertBeforeIterator& ) = 0;
    virtual void endVisit   ( const ZorbaInsertBeforeIterator& ) = 0;

    virtual void beginVisit ( const ZorbaInsertFirstIterator& ) = 0;
    virtual void endVisit   ( const ZorbaInsertFirstIterator& ) = 0;

    virtual void beginVisit ( const ZorbaInsertLastIterator& ) = 0;
    virtual void endVisit   ( const ZorbaInsertLastIterator& ) = 0;

    virtual void beginVisit ( const ZorbaApplyInsertFirstIterator& ) = 0;
    virtual void endVisit   ( const ZorbaApplyInsertFirstIterator& ) = 0;

    virtual void beginVisit ( const ZorbaApplyInsertLastIterator& ) = 0;
    virtual void endVisit   ( const ZorbaApplyInsertLastIterator& ) = 0;

    virtual void beginVisit ( const ZorbaApplyInsertBeforeIterator& ) = 0;
    virtual void endVisit   ( const ZorbaApplyInsertBeforeIterator& ) = 0;

    virtual void beginVisit ( const ZorbaApplyInsertAfterIterator& ) = 0;
    virtual void endVisit   ( const ZorbaApplyInsertAfterIterator& ) = 0;

    virtual void beginVisit ( const ZorbaDeleteIterator& ) = 0;
    virtual void endVisit   ( const ZorbaDeleteIterator& ) = 0;

    virtual void beginVisit ( const ZorbaDeleteFirstIterator& ) = 0;
    virtual void endVisit   ( const ZorbaDeleteFirstIterator& ) = 0;

    virtual void beginVisit ( const ZorbaDeleteLastIterator& ) = 0;
    virtual void endVisit   ( const ZorbaDeleteLastIterator& ) = 0;

    virtual void beginVisit ( const ZorbaEditIterator& ) = 0;
    virtual void endVisit   ( const ZorbaEditIterator& ) = 0;

    virtual void beginVisit ( const ZorbaInsertIterator& ) = 0;
    virtual void endVisit   ( const ZorbaInsertIterator& ) = 0;

    virtual void beginVisit ( const ZorbaTruncateCollectionIterator& ) = 0;
    virtual void endVisit   ( const ZorbaTruncateCollectionIterator& ) = 0;

    virtual void beginVisit ( const IsAvailableIndexIterator& ) = 0;
    virtual void endVisit   ( const IsAvailableIndexIterator& ) = 0;

    virtual void beginVisit ( const AvailableIndexesIterator& ) = 0;
    virtual void endVisit   ( const AvailableIndexesIterator& ) = 0;

    virtual void beginVisit ( const IsActivatedICIterator& ) = 0;
    virtual void endVisit   ( const IsActivatedICIterator& ) = 0;

    virtual void beginVisit ( const ActivatedICsIterator& ) = 0;
    virtual void endVisit   ( const ActivatedICsIterator& ) = 0;

    virtual void beginVisit ( const IsDeclaredCollectionIterator& ) = 0;
    virtual void endVisit   ( const IsDeclaredCollectionIterator& ) = 0;

    virtual void beginVisit ( const DeclaredCollectionsIterator& ) = 0;
    virtual void endVisit   ( const DeclaredCollectionsIterator& ) = 0;

    virtual void beginVisit ( const IsDeclaredIndexIterator& ) = 0;
    virtual void endVisit   ( const IsDeclaredIndexIterator& ) = 0;

    virtual void beginVisit ( const DeclaredIndexesIterator& ) = 0;
    virtual void endVisit   ( const DeclaredIndexesIterator& ) = 0;

    virtual void beginVisit ( const IsDeclaredICIterator& ) = 0;
    virtual void endVisit   ( const IsDeclaredICIterator& ) = 0;

    virtual void beginVisit ( const DeclaredICsIterator& ) = 0;
    virtual void endVisit   ( const DeclaredICsIterator& ) = 0;

    virtual void beginVisit ( const FnURICollectionIterator& ) = 0;
    virtual void endVisit   ( const FnURICollectionIterator& ) = 0;

    virtual void beginVisit ( const CurrentDateTimeIterator& ) = 0;
    virtual void endVisit   ( const CurrentDateTimeIterator& ) = 0;

    virtual void beginVisit ( const CurrentDateIterator& ) = 0;
    virtual void endVisit   ( const CurrentDateIterator& ) = 0;

    virtual void beginVisit ( const CurrentTimeIterator& ) = 0;
    virtual void endVisit   ( const CurrentTimeIterator& ) = 0;

    virtual void beginVisit ( const ImplicitTimezoneIterator& ) = 0;
    virtual void endVisit   ( const ImplicitTimezoneIterator& ) = 0;

    virtual void beginVisit ( const DefaultCollationIterator& ) = 0;
    virtual void endVisit   ( const DefaultCollationIterator& ) = 0;

    virtual void beginVisit ( const CsvParseIterator& ) = 0;
    virtual void endVisit   ( const CsvParseIterator& ) = 0;

    virtual void beginVisit ( const CsvSerializeIterator& ) = 0;
    virtual void endVisit   ( const CsvSerializeIterator& ) = 0;

    virtual void beginVisit ( const CurrentDate& ) = 0;
    virtual void endVisit   ( const CurrentDate& ) = 0;

    virtual void beginVisit ( const CurrentDateTime& ) = 0;
    virtual void endVisit   ( const CurrentDateTime& ) = 0;

    virtual void beginVisit ( const CurrentTime& ) = 0;
    virtual void endVisit   ( const CurrentTime& ) = 0;

    virtual void beginVisit ( const MillisToDateTime& ) = 0;
    virtual void endVisit   ( const MillisToDateTime& ) = 0;

    virtual void beginVisit ( const ParseDate& ) = 0;
    virtual void endVisit   ( const ParseDate& ) = 0;

    virtual void beginVisit ( const ParseDateTime& ) = 0;
    virtual void endVisit   ( const ParseDateTime& ) = 0;

    virtual void beginVisit ( const ParseTime& ) = 0;
    virtual void endVisit   ( const ParseTime& ) = 0;

    virtual void beginVisit ( const Timestamp& ) = 0;
    virtual void endVisit   ( const Timestamp& ) = 0;

    virtual void beginVisit ( const UTCOffset& ) = 0;
    virtual void endVisit   ( const UTCOffset& ) = 0;

    virtual void beginVisit ( const DctxSnapshotIdIterator& ) = 0;
    virtual void endVisit   ( const DctxSnapshotIdIterator& ) = 0;

#ifdef ZORBA_WITH_DEBUGGER
    virtual void beginVisit ( const DebugIterator& ) = 0;
    virtual void endVisit   ( const DebugIterator& ) = 0;
#endif
    virtual void beginVisit ( const YearsFromDurationIterator& ) = 0;
    virtual void endVisit   ( const YearsFromDurationIterator& ) = 0;

    virtual void beginVisit ( const MonthsFromDurationIterator& ) = 0;
    virtual void endVisit   ( const MonthsFromDurationIterator& ) = 0;

    virtual void beginVisit ( const DaysFromDurationIterator& ) = 0;
    virtual void endVisit   ( const DaysFromDurationIterator& ) = 0;

    virtual void beginVisit ( const HoursFromDurationIterator& ) = 0;
    virtual void endVisit   ( const HoursFromDurationIterator& ) = 0;

    virtual void beginVisit ( const MinutesFromDurationIterator& ) = 0;
    virtual void endVisit   ( const MinutesFromDurationIterator& ) = 0;

    virtual void beginVisit ( const SecondsFromDurationIterator& ) = 0;
    virtual void endVisit   ( const SecondsFromDurationIterator& ) = 0;

    virtual void beginVisit ( const YearFromDatetimeIterator& ) = 0;
    virtual void endVisit   ( const YearFromDatetimeIterator& ) = 0;

    virtual void beginVisit ( const MonthFromDatetimeIterator& ) = 0;
    virtual void endVisit   ( const MonthFromDatetimeIterator& ) = 0;

    virtual void beginVisit ( const DayFromDatetimeIterator& ) = 0;
    virtual void endVisit   ( const DayFromDatetimeIterator& ) = 0;

    virtual void beginVisit ( const HoursFromDatetimeIterator& ) = 0;
    virtual void endVisit   ( const HoursFromDatetimeIterator& ) = 0;

    virtual void beginVisit ( const MinutesFromDatetimeIterator& ) = 0;
    virtual void endVisit   ( const MinutesFromDatetimeIterator& ) = 0;

    virtual void beginVisit ( const SecondsFromDatetimeIterator& ) = 0;
    virtual void endVisit   ( const SecondsFromDatetimeIterator& ) = 0;

    virtual void beginVisit ( const TimezoneFromDatetimeIterator& ) = 0;
    virtual void endVisit   ( const TimezoneFromDatetimeIterator& ) = 0;

    virtual void beginVisit ( const YearFromDateIterator& ) = 0;
    virtual void endVisit   ( const YearFromDateIterator& ) = 0;

    virtual void beginVisit ( const MonthFromDateIterator& ) = 0;
    virtual void endVisit   ( const MonthFromDateIterator& ) = 0;

    virtual void beginVisit ( const DayFromDateIterator& ) = 0;
    virtual void endVisit   ( const DayFromDateIterator& ) = 0;

    virtual void beginVisit ( const TimezoneFromDateIterator& ) = 0;
    virtual void endVisit   ( const TimezoneFromDateIterator& ) = 0;

    virtual void beginVisit ( const HoursFromTimeIterator& ) = 0;
    virtual void endVisit   ( const HoursFromTimeIterator& ) = 0;

    virtual void beginVisit ( const MinutesFromTimeIterator& ) = 0;
    virtual void endVisit   ( const MinutesFromTimeIterator& ) = 0;

    virtual void beginVisit ( const SecondsFromTimeIterator& ) = 0;
    virtual void endVisit   ( const SecondsFromTimeIterator& ) = 0;

    virtual void beginVisit ( const TimezoneFromTimeIterator& ) = 0;
    virtual void endVisit   ( const TimezoneFromTimeIterator& ) = 0;

    virtual void beginVisit ( const ErrorIterator& ) = 0;
    virtual void endVisit   ( const ErrorIterator& ) = 0;

    virtual void beginVisit ( const TraceIterator& ) = 0;
    virtual void endVisit   ( const TraceIterator& ) = 0;

    virtual void beginVisit ( const ReadLineIterator& ) = 0;
    virtual void endVisit   ( const ReadLineIterator& ) = 0;

    virtual void beginVisit ( const PrintIterator& ) = 0;
    virtual void endVisit   ( const PrintIterator& ) = 0;

    virtual void beginVisit ( const FunctionTraceIterator& ) = 0;
    virtual void endVisit   ( const FunctionTraceIterator& ) = 0;

    virtual void beginVisit ( const FetchContentIterator& ) = 0;
    virtual void endVisit   ( const FetchContentIterator& ) = 0;

    virtual void beginVisit ( const FetchContentBinaryIterator& ) = 0;
    virtual void endVisit   ( const FetchContentBinaryIterator& ) = 0;

    virtual void beginVisit ( const FetchContentTypeIterator& ) = 0;
    virtual void endVisit   ( const FetchContentTypeIterator& ) = 0;

    virtual void beginVisit ( const FnPutIterator& ) = 0;
    virtual void endVisit   ( const FnPutIterator& ) = 0;

#ifndef ZORBA_NO_FULL_TEXT
    virtual void beginVisit ( const CurrentCompareOptionsIterator& ) = 0;
    virtual void endVisit   ( const CurrentCompareOptionsIterator& ) = 0;
#endif
#ifndef ZORBA_NO_FULL_TEXT
    virtual void beginVisit ( const CurrentLangIterator& ) = 0;
    virtual void endVisit   ( const CurrentLangIterator& ) = 0;
#endif
#ifndef ZORBA_NO_FULL_TEXT
    virtual void beginVisit ( const HostLangIterator& ) = 0;
    virtual void endVisit   ( const HostLangIterator& ) = 0;
#endif
#ifndef ZORBA_NO_FULL_TEXT
    virtual void beginVisit ( const IsStemLangSupportedIterator& ) = 0;
    virtual void endVisit   ( const IsStemLangSupportedIterator& ) = 0;
#endif
#ifndef ZORBA_NO_FULL_TEXT
    virtual void beginVisit ( const IsStopWordIterator& ) = 0;
    virtual void endVisit   ( const IsStopWordIterator& ) = 0;
#endif
#ifndef ZORBA_NO_FULL_TEXT
    virtual void beginVisit ( const IsStopWordLangSupportedIterator& ) = 0;
    virtual void endVisit   ( const IsStopWordLangSupportedIterator& ) = 0;
#endif
#ifndef ZORBA_NO_FULL_TEXT
    virtual void beginVisit ( const IsThesaurusLangSupportedIterator& ) = 0;
    virtual void endVisit   ( const IsThesaurusLangSupportedIterator& ) = 0;
#endif
#ifndef ZORBA_NO_FULL_TEXT
    virtual void beginVisit ( const IsTokenizerLangSupportedIterator& ) = 0;
    virtual void endVisit   ( const IsTokenizerLangSupportedIterator& ) = 0;
#endif
#ifndef ZORBA_NO_FULL_TEXT
    virtual void beginVisit ( const StemIterator& ) = 0;
    virtual void endVisit   ( const StemIterator& ) = 0;
#endif
#ifndef ZORBA_NO_FULL_TEXT
    virtual void beginVisit ( const StripDiacriticsIterator& ) = 0;
    virtual void endVisit   ( const StripDiacriticsIterator& ) = 0;
#endif
#ifndef ZORBA_NO_FULL_TEXT
    virtual void beginVisit ( const ThesaurusLookupIterator& ) = 0;
    virtual void endVisit   ( const ThesaurusLookupIterator& ) = 0;
#endif
#ifndef ZORBA_NO_FULL_TEXT
    virtual void beginVisit ( const TokenizeNodeIterator& ) = 0;
    virtual void endVisit   ( const TokenizeNodeIterator& ) = 0;
#endif
#ifndef ZORBA_NO_FULL_TEXT
    virtual void beginVisit ( const TokenizeNodesIterator& ) = 0;
    virtual void endVisit   ( const TokenizeNodesIterator& ) = 0;
#endif
#ifndef ZORBA_NO_FULL_TEXT
    virtual void beginVisit ( const TokenizerPropertiesIterator& ) = 0;
    virtual void endVisit   ( const TokenizerPropertiesIterator& ) = 0;
#endif
#ifndef ZORBA_NO_FULL_TEXT
    virtual void beginVisit ( const TokenizeStringIterator& ) = 0;
    virtual void endVisit   ( const TokenizeStringIterator& ) = 0;
#endif
    virtual void beginVisit ( const FunctionLookupIterator& ) = 0;
    virtual void endVisit   ( const FunctionLookupIterator& ) = 0;

    virtual void beginVisit ( const FunctionNameIterator& ) = 0;
    virtual void endVisit   ( const FunctionNameIterator& ) = 0;

    virtual void beginVisit ( const FunctionArityIterator& ) = 0;
    virtual void endVisit   ( const FunctionArityIterator& ) = 0;

    virtual void beginVisit ( const FnForEachPairIterator& ) = 0;
    virtual void endVisit   ( const FnForEachPairIterator& ) = 0;

    virtual void beginVisit ( const FnFoldLeftIterator& ) = 0;
    virtual void endVisit   ( const FnFoldLeftIterator& ) = 0;

    virtual void beginVisit ( const ActivateICIterator& ) = 0;
    virtual void endVisit   ( const ActivateICIterator& ) = 0;

    virtual void beginVisit ( const DeactivateICIterator& ) = 0;
    virtual void endVisit   ( const DeactivateICIterator& ) = 0;

    virtual void beginVisit ( const CheckICIterator& ) = 0;
    virtual void endVisit   ( const CheckICIterator& ) = 0;

    virtual void beginVisit ( const IndexKeysIterator& ) = 0;
    virtual void endVisit   ( const IndexKeysIterator& ) = 0;

    virtual void beginVisit ( const MemSizeIterator& ) = 0;
    virtual void endVisit   ( const MemSizeIterator& ) = 0;

    virtual void beginVisit ( const JSONtoXMLInternal& ) = 0;
    virtual void endVisit   ( const JSONtoXMLInternal& ) = 0;

    virtual void beginVisit ( const XMLtoJSONInternal& ) = 0;
    virtual void endVisit   ( const XMLtoJSONInternal& ) = 0;

    virtual void beginVisit ( const JSONDecodeFromRoundtripIterator& ) = 0;
    virtual void endVisit   ( const JSONDecodeFromRoundtripIterator& ) = 0;

    virtual void beginVisit ( const JSONEncodeForRoundtripIterator& ) = 0;
    virtual void endVisit   ( const JSONEncodeForRoundtripIterator& ) = 0;

    virtual void beginVisit ( const JSONParseIterator& ) = 0;
    virtual void endVisit   ( const JSONParseIterator& ) = 0;

    virtual void beginVisit ( const MultiObjectKeysIterator& ) = 0;
    virtual void endVisit   ( const MultiObjectKeysIterator& ) = 0;

    virtual void beginVisit ( const SingleObjectKeysIterator& ) = 0;
    virtual void endVisit   ( const SingleObjectKeysIterator& ) = 0;

    virtual void beginVisit ( const MultiObjectLookupIterator& ) = 0;
    virtual void endVisit   ( const MultiObjectLookupIterator& ) = 0;

    virtual void beginVisit ( const SingleObjectLookupIterator& ) = 0;
    virtual void endVisit   ( const SingleObjectLookupIterator& ) = 0;

    virtual void beginVisit ( const JSONObjectProjectIterator& ) = 0;
    virtual void endVisit   ( const JSONObjectProjectIterator& ) = 0;

    virtual void beginVisit ( const JSONObjectTrimIterator& ) = 0;
    virtual void endVisit   ( const JSONObjectTrimIterator& ) = 0;

    virtual void beginVisit ( const MultiArrayMembersIterator& ) = 0;
    virtual void endVisit   ( const MultiArrayMembersIterator& ) = 0;

    virtual void beginVisit ( const SingleArrayMembersIterator& ) = 0;
    virtual void endVisit   ( const SingleArrayMembersIterator& ) = 0;

    virtual void beginVisit ( const MultiArrayLookupIterator& ) = 0;
    virtual void endVisit   ( const MultiArrayLookupIterator& ) = 0;

    virtual void beginVisit ( const SingleArrayLookupIterator& ) = 0;
    virtual void endVisit   ( const SingleArrayLookupIterator& ) = 0;

    virtual void beginVisit ( const JSONArraySizeIterator& ) = 0;
    virtual void endVisit   ( const JSONArraySizeIterator& ) = 0;

    virtual void beginVisit ( const JSONArrayFlattenIterator& ) = 0;
    virtual void endVisit   ( const JSONArrayFlattenIterator& ) = 0;

    virtual void beginVisit ( const JSONNullIterator& ) = 0;
    virtual void endVisit   ( const JSONNullIterator& ) = 0;

    virtual void beginVisit ( const JSONObjectInsertIterator& ) = 0;
    virtual void endVisit   ( const JSONObjectInsertIterator& ) = 0;

    virtual void beginVisit ( const JSONArrayInsertIterator& ) = 0;
    virtual void endVisit   ( const JSONArrayInsertIterator& ) = 0;

    virtual void beginVisit ( const JSONDeleteIterator& ) = 0;
    virtual void endVisit   ( const JSONDeleteIterator& ) = 0;

    virtual void beginVisit ( const JSONReplaceValueIterator& ) = 0;
    virtual void endVisit   ( const JSONReplaceValueIterator& ) = 0;

    virtual void beginVisit ( const JSONRenameIterator& ) = 0;
    virtual void endVisit   ( const JSONRenameIterator& ) = 0;

    virtual void beginVisit ( const JSONArrayAppendIterator& ) = 0;
    virtual void endVisit   ( const JSONArrayAppendIterator& ) = 0;

    virtual void beginVisit ( const JSONBoxIterator& ) = 0;
    virtual void endVisit   ( const JSONBoxIterator& ) = 0;

    virtual void beginVisit ( const JSoundAnnotateIterator& ) = 0;
    virtual void endVisit   ( const JSoundAnnotateIterator& ) = 0;

    virtual void beginVisit ( const JSoundValidateIterator& ) = 0;
    virtual void endVisit   ( const JSoundValidateIterator& ) = 0;

    virtual void beginVisit ( const SqrtIterator& ) = 0;
    virtual void endVisit   ( const SqrtIterator& ) = 0;

    virtual void beginVisit ( const ExpIterator& ) = 0;
    virtual void endVisit   ( const ExpIterator& ) = 0;

    virtual void beginVisit ( const Exp10Iterator& ) = 0;
    virtual void endVisit   ( const Exp10Iterator& ) = 0;

    virtual void beginVisit ( const LogIterator& ) = 0;
    virtual void endVisit   ( const LogIterator& ) = 0;

    virtual void beginVisit ( const Log10Iterator& ) = 0;
    virtual void endVisit   ( const Log10Iterator& ) = 0;

    virtual void beginVisit ( const SinIterator& ) = 0;
    virtual void endVisit   ( const SinIterator& ) = 0;

    virtual void beginVisit ( const CosIterator& ) = 0;
    virtual void endVisit   ( const CosIterator& ) = 0;

    virtual void beginVisit ( const TanIterator& ) = 0;
    virtual void endVisit   ( const TanIterator& ) = 0;

    virtual void beginVisit ( const ArcSinIterator& ) = 0;
    virtual void endVisit   ( const ArcSinIterator& ) = 0;

    virtual void beginVisit ( const ArcCosIterator& ) = 0;
    virtual void endVisit   ( const ArcCosIterator& ) = 0;

    virtual void beginVisit ( const ArcTanIterator& ) = 0;
    virtual void endVisit   ( const ArcTanIterator& ) = 0;

    virtual void beginVisit ( const Atan2Iterator& ) = 0;
    virtual void endVisit   ( const Atan2Iterator& ) = 0;

    virtual void beginVisit ( const CoshIterator& ) = 0;
    virtual void endVisit   ( const CoshIterator& ) = 0;

    virtual void beginVisit ( const AcoshIterator& ) = 0;
    virtual void endVisit   ( const AcoshIterator& ) = 0;

    virtual void beginVisit ( const FmodIterator& ) = 0;
    virtual void endVisit   ( const FmodIterator& ) = 0;

    virtual void beginVisit ( const LdexpIterator& ) = 0;
    virtual void endVisit   ( const LdexpIterator& ) = 0;

    virtual void beginVisit ( const PowIterator& ) = 0;
    virtual void endVisit   ( const PowIterator& ) = 0;

    virtual void beginVisit ( const SinhIterator& ) = 0;
    virtual void endVisit   ( const SinhIterator& ) = 0;

    virtual void beginVisit ( const AsinhIterator& ) = 0;
    virtual void endVisit   ( const AsinhIterator& ) = 0;

    virtual void beginVisit ( const TanhIterator& ) = 0;
    virtual void endVisit   ( const TanhIterator& ) = 0;

    virtual void beginVisit ( const AtanhIterator& ) = 0;
    virtual void endVisit   ( const AtanhIterator& ) = 0;

    virtual void beginVisit ( const PiNumberIterator& ) = 0;
    virtual void endVisit   ( const PiNumberIterator& ) = 0;

    virtual void beginVisit ( const IsInfIterator& ) = 0;
    virtual void endVisit   ( const IsInfIterator& ) = 0;

    virtual void beginVisit ( const IsNaNIterator& ) = 0;
    virtual void endVisit   ( const IsNaNIterator& ) = 0;

    virtual void beginVisit ( const ModfIterator& ) = 0;
    virtual void endVisit   ( const ModfIterator& ) = 0;

    virtual void beginVisit ( const FrexpIterator& ) = 0;
    virtual void endVisit   ( const FrexpIterator& ) = 0;

    virtual void beginVisit ( const NodePositionIterator& ) = 0;
    virtual void endVisit   ( const NodePositionIterator& ) = 0;

    virtual void beginVisit ( const IsAncestorPositionIterator& ) = 0;
    virtual void endVisit   ( const IsAncestorPositionIterator& ) = 0;

    virtual void beginVisit ( const IsFollowingSiblingPositionIterator& ) = 0;
    virtual void endVisit   ( const IsFollowingSiblingPositionIterator& ) = 0;

    virtual void beginVisit ( const IsFollowingPositionIterator& ) = 0;
    virtual void endVisit   ( const IsFollowingPositionIterator& ) = 0;

    virtual void beginVisit ( const IsInSubtreeOfPositionIterator& ) = 0;
    virtual void endVisit   ( const IsInSubtreeOfPositionIterator& ) = 0;

    virtual void beginVisit ( const IsDescendantPositionIterator& ) = 0;
    virtual void endVisit   ( const IsDescendantPositionIterator& ) = 0;

    virtual void beginVisit ( const IsPrecedingSiblingPositionIterator& ) = 0;
    virtual void endVisit   ( const IsPrecedingSiblingPositionIterator& ) = 0;

    virtual void beginVisit ( const IsPrecedingPositionIterator& ) = 0;
    virtual void endVisit   ( const IsPrecedingPositionIterator& ) = 0;

    virtual void beginVisit ( const IsChildPositionIterator& ) = 0;
    virtual void endVisit   ( const IsChildPositionIterator& ) = 0;

    virtual void beginVisit ( const IsAttributeOfPositionIterator& ) = 0;
    virtual void endVisit   ( const IsAttributeOfPositionIterator& ) = 0;

    virtual void beginVisit ( const IsParentPositionIterator& ) = 0;
    virtual void endVisit   ( const IsParentPositionIterator& ) = 0;

    virtual void beginVisit ( const IsPrecedingInDocumentOrderPositionIterator& ) = 0;
    virtual void endVisit   ( const IsPrecedingInDocumentOrderPositionIterator& ) = 0;

    virtual void beginVisit ( const IsFollowingInDocumentOrderPositionIterator& ) = 0;
    virtual void endVisit   ( const IsFollowingInDocumentOrderPositionIterator& ) = 0;

    virtual void beginVisit ( const LevelPositionIterator& ) = 0;
    virtual void endVisit   ( const LevelPositionIterator& ) = 0;

    virtual void beginVisit ( const IsAttributePositionIterator& ) = 0;
    virtual void endVisit   ( const IsAttributePositionIterator& ) = 0;

    virtual void beginVisit ( const IsCommentPositionIterator& ) = 0;
    virtual void endVisit   ( const IsCommentPositionIterator& ) = 0;

    virtual void beginVisit ( const IsDocumentPositionIterator& ) = 0;
    virtual void endVisit   ( const IsDocumentPositionIterator& ) = 0;

    virtual void beginVisit ( const IsElementPositionIterator& ) = 0;
    virtual void endVisit   ( const IsElementPositionIterator& ) = 0;

    virtual void beginVisit ( const IsProcessingInstructionPositionIterator& ) = 0;
    virtual void endVisit   ( const IsProcessingInstructionPositionIterator& ) = 0;

    virtual void beginVisit ( const IsTextPositionIterator& ) = 0;
    virtual void endVisit   ( const IsTextPositionIterator& ) = 0;

    virtual void beginVisit ( const IsSiblingPositionIterator& ) = 0;
    virtual void endVisit   ( const IsSiblingPositionIterator& ) = 0;

    virtual void beginVisit ( const InSameTreePositionIterator& ) = 0;
    virtual void endVisit   ( const InSameTreePositionIterator& ) = 0;

    virtual void beginVisit ( const InCollectionPositionIterator& ) = 0;
    virtual void endVisit   ( const InCollectionPositionIterator& ) = 0;

    virtual void beginVisit ( const InSameCollectionPositionIterator& ) = 0;
    virtual void endVisit   ( const InSameCollectionPositionIterator& ) = 0;

    virtual void beginVisit ( const FnLocalNameIterator& ) = 0;
    virtual void endVisit   ( const FnLocalNameIterator& ) = 0;

    virtual void beginVisit ( const FnNamespaceUriIterator& ) = 0;
    virtual void endVisit   ( const FnNamespaceUriIterator& ) = 0;

    virtual void beginVisit ( const FnLangIterator& ) = 0;
    virtual void endVisit   ( const FnLangIterator& ) = 0;

    virtual void beginVisit ( const FnHasChildrenIterator& ) = 0;
    virtual void endVisit   ( const FnHasChildrenIterator& ) = 0;

    virtual void beginVisit ( const FnInnermostIterator& ) = 0;
    virtual void endVisit   ( const FnInnermostIterator& ) = 0;

    virtual void beginVisit ( const FnOutermostIterator& ) = 0;
    virtual void endVisit   ( const FnOutermostIterator& ) = 0;

    virtual void beginVisit ( const FnGenerateIdIterator& ) = 0;
    virtual void endVisit   ( const FnGenerateIdIterator& ) = 0;

    virtual void beginVisit ( const IsAncestorIterator& ) = 0;
    virtual void endVisit   ( const IsAncestorIterator& ) = 0;

    virtual void beginVisit ( const IsDescendantIterator& ) = 0;
    virtual void endVisit   ( const IsDescendantIterator& ) = 0;

    virtual void beginVisit ( const IsParentIterator& ) = 0;
    virtual void endVisit   ( const IsParentIterator& ) = 0;

    virtual void beginVisit ( const IsChildIterator& ) = 0;
    virtual void endVisit   ( const IsChildIterator& ) = 0;

    virtual void beginVisit ( const IsFollowingIterator& ) = 0;
    virtual void endVisit   ( const IsFollowingIterator& ) = 0;

    virtual void beginVisit ( const IsPrecedingIterator& ) = 0;
    virtual void endVisit   ( const IsPrecedingIterator& ) = 0;

    virtual void beginVisit ( const IsFollowingSiblingIterator& ) = 0;
    virtual void endVisit   ( const IsFollowingSiblingIterator& ) = 0;

    virtual void beginVisit ( const IsPrecedingSiblingIterator& ) = 0;
    virtual void endVisit   ( const IsPrecedingSiblingIterator& ) = 0;

    virtual void beginVisit ( const LevelIterator& ) = 0;
    virtual void endVisit   ( const LevelIterator& ) = 0;

    virtual void beginVisit ( const LeastCommonAncestor& ) = 0;
    virtual void endVisit   ( const LeastCommonAncestor& ) = 0;

    virtual void beginVisit ( const FnPathIterator& ) = 0;
    virtual void endVisit   ( const FnPathIterator& ) = 0;

    virtual void beginVisit ( const NodeCopyIterator& ) = 0;
    virtual void endVisit   ( const NodeCopyIterator& ) = 0;

    virtual void beginVisit ( const AbsIterator& ) = 0;
    virtual void endVisit   ( const AbsIterator& ) = 0;

    virtual void beginVisit ( const CeilingIterator& ) = 0;
    virtual void endVisit   ( const CeilingIterator& ) = 0;

    virtual void beginVisit ( const FloorIterator& ) = 0;
    virtual void endVisit   ( const FloorIterator& ) = 0;

    virtual void beginVisit ( const RoundIterator& ) = 0;
    virtual void endVisit   ( const RoundIterator& ) = 0;

    virtual void beginVisit ( const RoundHalfToEvenIterator& ) = 0;
    virtual void endVisit   ( const RoundHalfToEvenIterator& ) = 0;

    virtual void beginVisit ( const FormatNumberIterator& ) = 0;
    virtual void endVisit   ( const FormatNumberIterator& ) = 0;

    virtual void beginVisit ( const FormatIntegerIterator& ) = 0;
    virtual void endVisit   ( const FormatIntegerIterator& ) = 0;

    virtual void beginVisit ( const FnZorbaParseXmlFragmentIterator& ) = 0;
    virtual void endVisit   ( const FnZorbaParseXmlFragmentIterator& ) = 0;

    virtual void beginVisit ( const FnZorbaCanonicalizeIterator& ) = 0;
    virtual void endVisit   ( const FnZorbaCanonicalizeIterator& ) = 0;

    virtual void beginVisit ( const FnParseXmlFragmentIterator& ) = 0;
    virtual void endVisit   ( const FnParseXmlFragmentIterator& ) = 0;

    virtual void beginVisit ( const FnParseXmlIterator& ) = 0;
    virtual void endVisit   ( const FnParseXmlIterator& ) = 0;

    virtual void beginVisit ( const FnSerializeIterator& ) = 0;
    virtual void endVisit   ( const FnSerializeIterator& ) = 0;

    virtual void beginVisit ( const ResolveQNameIterator& ) = 0;
    virtual void endVisit   ( const ResolveQNameIterator& ) = 0;

    virtual void beginVisit ( const QNameIterator& ) = 0;
    virtual void endVisit   ( const QNameIterator& ) = 0;

    virtual void beginVisit ( const QNameEqualIterator& ) = 0;
    virtual void endVisit   ( const QNameEqualIterator& ) = 0;

    virtual void beginVisit ( const PrefixFromQNameIterator& ) = 0;
    virtual void endVisit   ( const PrefixFromQNameIterator& ) = 0;

    virtual void beginVisit ( const LocalNameFromQNameIterator& ) = 0;
    virtual void endVisit   ( const LocalNameFromQNameIterator& ) = 0;

    virtual void beginVisit ( const NamespaceUriFromQNameIterator& ) = 0;
    virtual void endVisit   ( const NamespaceUriFromQNameIterator& ) = 0;

    virtual void beginVisit ( const NamespaceUriForPrefixIterator& ) = 0;
    virtual void endVisit   ( const NamespaceUriForPrefixIterator& ) = 0;

    virtual void beginVisit ( const InScopePrefixesIterator& ) = 0;
    virtual void endVisit   ( const InScopePrefixesIterator& ) = 0;

    virtual void beginVisit ( const SeededRandomIterator& ) = 0;
    virtual void endVisit   ( const SeededRandomIterator& ) = 0;

    virtual void beginVisit ( const RandomIterator& ) = 0;
    virtual void endVisit   ( const RandomIterator& ) = 0;

    virtual void beginVisit ( const UuidIterator& ) = 0;
    virtual void endVisit   ( const UuidIterator& ) = 0;

    virtual void beginVisit ( const ReferenceIterator& ) = 0;
    virtual void endVisit   ( const ReferenceIterator& ) = 0;

    virtual void beginVisit ( const HasReferenceIterator& ) = 0;
    virtual void endVisit   ( const HasReferenceIterator& ) = 0;

    virtual void beginVisit ( const AssignReferenceIterator& ) = 0;
    virtual void endVisit   ( const AssignReferenceIterator& ) = 0;

    virtual void beginVisit ( const DereferenceIterator& ) = 0;
    virtual void endVisit   ( const DereferenceIterator& ) = 0;

#ifndef ZORBA_NO_XMLSCHEMA
    virtual void beginVisit ( const ValidateIterator& ) = 0;
    virtual void endVisit   ( const ValidateIterator& ) = 0;
#endif
    virtual void beginVisit ( const ZorbaValidateInPlaceIterator& ) = 0;
    virtual void endVisit   ( const ZorbaValidateInPlaceIterator& ) = 0;

    virtual void beginVisit ( const ZorbaSchemaTypeIterator& ) = 0;
    virtual void endVisit   ( const ZorbaSchemaTypeIterator& ) = 0;

    virtual void beginVisit ( const ZorbaIsValidatedIterator& ) = 0;
    virtual void endVisit   ( const ZorbaIsValidatedIterator& ) = 0;

    virtual void beginVisit ( const SctxBaseUriIterator& ) = 0;
    virtual void endVisit   ( const SctxBaseUriIterator& ) = 0;

    virtual void beginVisit ( const SctxBoundarySpacePolicyIterator& ) = 0;
    virtual void endVisit   ( const SctxBoundarySpacePolicyIterator& ) = 0;

    virtual void beginVisit ( const SctxConstructionModeIterator& ) = 0;
    virtual void endVisit   ( const SctxConstructionModeIterator& ) = 0;

    virtual void beginVisit ( const SctxCopyNamespacesModeIterator& ) = 0;
    virtual void endVisit   ( const SctxCopyNamespacesModeIterator& ) = 0;

    virtual void beginVisit ( const SctxDefaultCollationIterator& ) = 0;
    virtual void endVisit   ( const SctxDefaultCollationIterator& ) = 0;

    virtual void beginVisit ( const SctxDefaultCollectionTypeIterator& ) = 0;
    virtual void endVisit   ( const SctxDefaultCollectionTypeIterator& ) = 0;

    virtual void beginVisit ( const SctxDefaultFunctionNamespaceIterator& ) = 0;
    virtual void endVisit   ( const SctxDefaultFunctionNamespaceIterator& ) = 0;

    virtual void beginVisit ( const SctxDefaultOrderIterator& ) = 0;
    virtual void endVisit   ( const SctxDefaultOrderIterator& ) = 0;

    virtual void beginVisit ( const SctxFunctionAnnotationsIterator& ) = 0;
    virtual void endVisit   ( const SctxFunctionAnnotationsIterator& ) = 0;

    virtual void beginVisit ( const SctxFunctionArgumentsCountIterator& ) = 0;
    virtual void endVisit   ( const SctxFunctionArgumentsCountIterator& ) = 0;

    virtual void beginVisit ( const SctxFunctionNamesIterator& ) = 0;
    virtual void endVisit   ( const SctxFunctionNamesIterator& ) = 0;

    virtual void beginVisit ( const SctxFunctionsIterator& ) = 0;
    virtual void endVisit   ( const SctxFunctionsIterator& ) = 0;

    virtual void beginVisit ( const SctxInScopeAttributeDeclarationsIterator& ) = 0;
    virtual void endVisit   ( const SctxInScopeAttributeDeclarationsIterator& ) = 0;

    virtual void beginVisit ( const SctxInScopeAttributeGroupsIterator& ) = 0;
    virtual void endVisit   ( const SctxInScopeAttributeGroupsIterator& ) = 0;

    virtual void beginVisit ( const SctxInScopeElementDeclarationsIterator& ) = 0;
    virtual void endVisit   ( const SctxInScopeElementDeclarationsIterator& ) = 0;

    virtual void beginVisit ( const SctxInScopeElementGroupsIterator& ) = 0;
    virtual void endVisit   ( const SctxInScopeElementGroupsIterator& ) = 0;

    virtual void beginVisit ( const SctxInScopeSchemaTypesIterator& ) = 0;
    virtual void endVisit   ( const SctxInScopeSchemaTypesIterator& ) = 0;

    virtual void beginVisit ( const SctxInscopeVariablesIterator& ) = 0;
    virtual void endVisit   ( const SctxInscopeVariablesIterator& ) = 0;

    virtual void beginVisit ( const SctxOptionIterator& ) = 0;
    virtual void endVisit   ( const SctxOptionIterator& ) = 0;

    virtual void beginVisit ( const SctxOrderingModeIterator& ) = 0;
    virtual void endVisit   ( const SctxOrderingModeIterator& ) = 0;

    virtual void beginVisit ( const SctxStaticallyKnownCollationsIterator& ) = 0;
    virtual void endVisit   ( const SctxStaticallyKnownCollationsIterator& ) = 0;

    virtual void beginVisit ( const SctxStaticallyKnownDocumentsIterator& ) = 0;
    virtual void endVisit   ( const SctxStaticallyKnownDocumentsIterator& ) = 0;

    virtual void beginVisit ( const SctxStaticallyKnownDocumentTypeIterator& ) = 0;
    virtual void endVisit   ( const SctxStaticallyKnownDocumentTypeIterator& ) = 0;

    virtual void beginVisit ( const SctxStaticallyKnownNamespaceBindingIterator& ) = 0;
    virtual void endVisit   ( const SctxStaticallyKnownNamespaceBindingIterator& ) = 0;

    virtual void beginVisit ( const SctxStaticallyKnownNamespacesIterator& ) = 0;
    virtual void endVisit   ( const SctxStaticallyKnownNamespacesIterator& ) = 0;

    virtual void beginVisit ( const SctxXPath10CompatModeIterator& ) = 0;
    virtual void endVisit   ( const SctxXPath10CompatModeIterator& ) = 0;

    virtual void beginVisit ( const SeqValueIntersectIterator& ) = 0;
    virtual void endVisit   ( const SeqValueIntersectIterator& ) = 0;

    virtual void beginVisit ( const SeqValueUnionIterator& ) = 0;
    virtual void endVisit   ( const SeqValueUnionIterator& ) = 0;

    virtual void beginVisit ( const SeqValueExceptIterator& ) = 0;
    virtual void endVisit   ( const SeqValueExceptIterator& ) = 0;

    virtual void beginVisit ( const FnConcatIterator& ) = 0;
    virtual void endVisit   ( const FnConcatIterator& ) = 0;

    virtual void beginVisit ( const FnIndexOfIterator& ) = 0;
    virtual void endVisit   ( const FnIndexOfIterator& ) = 0;

    virtual void beginVisit ( const FnEmptyIterator& ) = 0;
    virtual void endVisit   ( const FnEmptyIterator& ) = 0;

    virtual void beginVisit ( const FnExistsIterator& ) = 0;
    virtual void endVisit   ( const FnExistsIterator& ) = 0;

    virtual void beginVisit ( const FnDistinctValuesIterator& ) = 0;
    virtual void endVisit   ( const FnDistinctValuesIterator& ) = 0;

    virtual void beginVisit ( const FnInsertBeforeIterator& ) = 0;
    virtual void endVisit   ( const FnInsertBeforeIterator& ) = 0;

    virtual void beginVisit ( const FnRemoveIterator& ) = 0;
    virtual void endVisit   ( const FnRemoveIterator& ) = 0;

    virtual void beginVisit ( const FnReverseIterator& ) = 0;
    virtual void endVisit   ( const FnReverseIterator& ) = 0;

    virtual void beginVisit ( const FnSubsequenceIterator& ) = 0;
    virtual void endVisit   ( const FnSubsequenceIterator& ) = 0;

    virtual void beginVisit ( const SubsequenceIntIterator& ) = 0;
    virtual void endVisit   ( const SubsequenceIntIterator& ) = 0;

    virtual void beginVisit ( const SequencePointAccessIterator& ) = 0;
    virtual void endVisit   ( const SequencePointAccessIterator& ) = 0;

    virtual void beginVisit ( const FnZeroOrOneIterator& ) = 0;
    virtual void endVisit   ( const FnZeroOrOneIterator& ) = 0;

    virtual void beginVisit ( const FnOneOrMoreIterator& ) = 0;
    virtual void endVisit   ( const FnOneOrMoreIterator& ) = 0;

    virtual void beginVisit ( const FnExactlyOneIterator& ) = 0;
    virtual void endVisit   ( const FnExactlyOneIterator& ) = 0;

    virtual void beginVisit ( const FnDeepEqualIterator& ) = 0;
    virtual void endVisit   ( const FnDeepEqualIterator& ) = 0;

    virtual void beginVisit ( const HashSemiJoinIterator& ) = 0;
    virtual void endVisit   ( const HashSemiJoinIterator& ) = 0;

    virtual void beginVisit ( const SortSemiJoinIterator& ) = 0;
    virtual void endVisit   ( const SortSemiJoinIterator& ) = 0;

    virtual void beginVisit ( const FnCountIterator& ) = 0;
    virtual void endVisit   ( const FnCountIterator& ) = 0;

    virtual void beginVisit ( const FnAvgIterator& ) = 0;
    virtual void endVisit   ( const FnAvgIterator& ) = 0;

    virtual void beginVisit ( const FnSumIterator& ) = 0;
    virtual void endVisit   ( const FnSumIterator& ) = 0;

    virtual void beginVisit ( const FnSumDoubleIterator& ) = 0;
    virtual void endVisit   ( const FnSumDoubleIterator& ) = 0;

    virtual void beginVisit ( const FnSumFloatIterator& ) = 0;
    virtual void endVisit   ( const FnSumFloatIterator& ) = 0;

    virtual void beginVisit ( const FnSumDecimalIterator& ) = 0;
    virtual void endVisit   ( const FnSumDecimalIterator& ) = 0;

    virtual void beginVisit ( const FnSumIntegerIterator& ) = 0;
    virtual void endVisit   ( const FnSumIntegerIterator& ) = 0;

    virtual void beginVisit ( const OpToIterator& ) = 0;
    virtual void endVisit   ( const OpToIterator& ) = 0;

    virtual void beginVisit ( const FnIdIterator& ) = 0;
    virtual void endVisit   ( const FnIdIterator& ) = 0;

    virtual void beginVisit ( const FnElementWithIdIterator& ) = 0;
    virtual void endVisit   ( const FnElementWithIdIterator& ) = 0;

    virtual void beginVisit ( const FnIdRefIterator& ) = 0;
    virtual void endVisit   ( const FnIdRefIterator& ) = 0;

    virtual void beginVisit ( const FnDocIterator& ) = 0;
    virtual void endVisit   ( const FnDocIterator& ) = 0;

    virtual void beginVisit ( const FnDocAvailableIterator& ) = 0;
    virtual void endVisit   ( const FnDocAvailableIterator& ) = 0;

    virtual void beginVisit ( const FnAvailableEnvironmentVariablesIterator& ) = 0;
    virtual void endVisit   ( const FnAvailableEnvironmentVariablesIterator& ) = 0;

    virtual void beginVisit ( const FnEnvironmentVariableIterator& ) = 0;
    virtual void endVisit   ( const FnEnvironmentVariableIterator& ) = 0;

    virtual void beginVisit ( const FnUnparsedTextIterator& ) = 0;
    virtual void endVisit   ( const FnUnparsedTextIterator& ) = 0;

    virtual void beginVisit ( const FnUnparsedTextAvailableIterator& ) = 0;
    virtual void endVisit   ( const FnUnparsedTextAvailableIterator& ) = 0;

    virtual void beginVisit ( const FnUnparsedTextLinesIterator& ) = 0;
    virtual void endVisit   ( const FnUnparsedTextLinesIterator& ) = 0;

    virtual void beginVisit ( const AvailableDocumentsIterator& ) = 0;
    virtual void endVisit   ( const AvailableDocumentsIterator& ) = 0;

    virtual void beginVisit ( const IsAvailableDocumentIterator& ) = 0;
    virtual void endVisit   ( const IsAvailableDocumentIterator& ) = 0;

    virtual void beginVisit ( const PutDocumentIterator& ) = 0;
    virtual void endVisit   ( const PutDocumentIterator& ) = 0;

    virtual void beginVisit ( const RemoveDocumentIterator& ) = 0;
    virtual void endVisit   ( const RemoveDocumentIterator& ) = 0;

    virtual void beginVisit ( const RetrieveDocumentIterator& ) = 0;
    virtual void endVisit   ( const RetrieveDocumentIterator& ) = 0;

    virtual void beginVisit ( const MapCreateIterator& ) = 0;
    virtual void endVisit   ( const MapCreateIterator& ) = 0;

    virtual void beginVisit ( const MapDropIterator& ) = 0;
    virtual void endVisit   ( const MapDropIterator& ) = 0;

    virtual void beginVisit ( const MapGetIterator& ) = 0;
    virtual void endVisit   ( const MapGetIterator& ) = 0;

    virtual void beginVisit ( const MapInsertIterator& ) = 0;
    virtual void endVisit   ( const MapInsertIterator& ) = 0;

    virtual void beginVisit ( const MapDeleteIterator& ) = 0;
    virtual void endVisit   ( const MapDeleteIterator& ) = 0;

    virtual void beginVisit ( const MapKeysIterator& ) = 0;
    virtual void endVisit   ( const MapKeysIterator& ) = 0;

    virtual void beginVisit ( const MapSizeIterator& ) = 0;
    virtual void endVisit   ( const MapSizeIterator& ) = 0;

    virtual void beginVisit ( const AvailableMapsIterator& ) = 0;
    virtual void endVisit   ( const AvailableMapsIterator& ) = 0;

    virtual void beginVisit ( const MapOptionsIterator& ) = 0;
    virtual void endVisit   ( const MapOptionsIterator& ) = 0;

    virtual void beginVisit ( const CodepointsToStringIterator& ) = 0;
    virtual void endVisit   ( const CodepointsToStringIterator& ) = 0;

    virtual void beginVisit ( const StringToCodepointsIterator& ) = 0;
    virtual void endVisit   ( const StringToCodepointsIterator& ) = 0;

    virtual void beginVisit ( const CompareStrIterator& ) = 0;
    virtual void endVisit   ( const CompareStrIterator& ) = 0;

    virtual void beginVisit ( const CodepointEqualIterator& ) = 0;
    virtual void endVisit   ( const CodepointEqualIterator& ) = 0;

    virtual void beginVisit ( const ConcatStrIterator& ) = 0;
    virtual void endVisit   ( const ConcatStrIterator& ) = 0;

    virtual void beginVisit ( const StringJoinIterator& ) = 0;
    virtual void endVisit   ( const StringJoinIterator& ) = 0;

    virtual void beginVisit ( const SubstringIterator& ) = 0;
    virtual void endVisit   ( const SubstringIterator& ) = 0;

    virtual void beginVisit ( const SubstringIntOptIterator& ) = 0;
    virtual void endVisit   ( const SubstringIntOptIterator& ) = 0;

    virtual void beginVisit ( const StringLengthIterator& ) = 0;
    virtual void endVisit   ( const StringLengthIterator& ) = 0;

    virtual void beginVisit ( const NormalizeSpaceIterator& ) = 0;
    virtual void endVisit   ( const NormalizeSpaceIterator& ) = 0;

    virtual void beginVisit ( const NormalizeUnicodeIterator& ) = 0;
    virtual void endVisit   ( const NormalizeUnicodeIterator& ) = 0;

    virtual void beginVisit ( const UpperCaseIterator& ) = 0;
    virtual void endVisit   ( const UpperCaseIterator& ) = 0;

    virtual void beginVisit ( const LowerCaseIterator& ) = 0;
    virtual void endVisit   ( const LowerCaseIterator& ) = 0;

    virtual void beginVisit ( const TranslateIterator& ) = 0;
    virtual void endVisit   ( const TranslateIterator& ) = 0;

    virtual void beginVisit ( const EncodeForUriIterator& ) = 0;
    virtual void endVisit   ( const EncodeForUriIterator& ) = 0;

    virtual void beginVisit ( const IriToUriIterator& ) = 0;
    virtual void endVisit   ( const IriToUriIterator& ) = 0;

    virtual void beginVisit ( const EscapeHtmlUriIterator& ) = 0;
    virtual void endVisit   ( const EscapeHtmlUriIterator& ) = 0;

    virtual void beginVisit ( const ContainsIterator& ) = 0;
    virtual void endVisit   ( const ContainsIterator& ) = 0;

    virtual void beginVisit ( const StartsWithIterator& ) = 0;
    virtual void endVisit   ( const StartsWithIterator& ) = 0;

    virtual void beginVisit ( const EndsWithIterator& ) = 0;
    virtual void endVisit   ( const EndsWithIterator& ) = 0;

    virtual void beginVisit ( const SubstringBeforeIterator& ) = 0;
    virtual void endVisit   ( const SubstringBeforeIterator& ) = 0;

    virtual void beginVisit ( const SubstringAfterIterator& ) = 0;
    virtual void endVisit   ( const SubstringAfterIterator& ) = 0;

    virtual void beginVisit ( const FnMatchesIterator& ) = 0;
    virtual void endVisit   ( const FnMatchesIterator& ) = 0;

    virtual void beginVisit ( const FnReplaceIterator& ) = 0;
    virtual void endVisit   ( const FnReplaceIterator& ) = 0;

    virtual void beginVisit ( const FnTokenizeIterator& ) = 0;
    virtual void endVisit   ( const FnTokenizeIterator& ) = 0;

    virtual void beginVisit ( const FnAnalyzeStringIterator& ) = 0;
    virtual void endVisit   ( const FnAnalyzeStringIterator& ) = 0;

    virtual void beginVisit ( const StringAnalyzeStringIterator& ) = 0;
    virtual void endVisit   ( const StringAnalyzeStringIterator& ) = 0;

    virtual void beginVisit ( const StringMaterializeIterator& ) = 0;
    virtual void endVisit   ( const StringMaterializeIterator& ) = 0;

    virtual void beginVisit ( const StringIsStreamableIterator& ) = 0;
    virtual void endVisit   ( const StringIsStreamableIterator& ) = 0;

    virtual void beginVisit ( const StringIsSeekableIterator& ) = 0;
    virtual void endVisit   ( const StringIsSeekableIterator& ) = 0;

    virtual void beginVisit ( const StringSplitIterator& ) = 0;
    virtual void endVisit   ( const StringSplitIterator& ) = 0;

    virtual void beginVisit ( const DecodeURIIterator& ) = 0;
    virtual void endVisit   ( const DecodeURIIterator& ) = 0;

    virtual void beginVisit ( const ParseURIIterator& ) = 0;
    virtual void endVisit   ( const ParseURIIterator& ) = 0;

    virtual void beginVisit ( const SerializeURIIterator& ) = 0;
    virtual void endVisit   ( const SerializeURIIterator& ) = 0;

    virtual void beginVisit ( const XQDocContentIterator& ) = 0;
    virtual void endVisit   ( const XQDocContentIterator& ) = 0;

  }; //class PlanIterVisitor
} //namespace zorba

#endif

