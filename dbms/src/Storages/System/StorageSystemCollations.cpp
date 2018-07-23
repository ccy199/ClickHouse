#include <Columns/Collator.h>
#include <Storages/System/StorageSystemCollations.h>

namespace DB
{
void StorageSystemCollations::fillData(MutableColumns & res_columns) const
{
    for (const auto & collation_name : Collator::getAvailableCollations())
    {
        res_columns[0]->insert(collation_name);
    }
}
}
