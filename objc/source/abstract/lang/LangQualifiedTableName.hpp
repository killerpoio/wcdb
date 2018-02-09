/*
 * Tencent is pleased to support the open source community by making
 * WCDB available.
 *
 * Copyright (C) 2017 THL A29 Limited, a Tencent company.
 * All rights reserved.
 *
 * Licensed under the BSD 3-Clause License (the "License"); you may not use
 * this file except in compliance with the License. You may obtain a copy of
 * the License at
 *
 *       https://opensource.org/licenses/BSD-3-Clause
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef LangQualifiedTableName_hpp
#define LangQualifiedTableName_hpp

#include <WINQ/lang_common.h>

namespace WCDB {

namespace lang {

class QualifiedTableName : public Lang {
public:
    QualifiedTableName();

    copy_on_write_string schemaName;
    copy_on_write_string tableName;

    enum class IndexSwitch : int {
        NotSet,
        Indexed,
        NotIndexed,
    };
    IndexSwitch indexSwitcher;
    copy_on_write_string indexName;

    virtual copy_on_write_string SQL() const override;
};

} // namespace lang

} // namespace WCDB

#endif /* LangQualifiedTableName_hpp */
