#include "Globals.h"

namespace ov {

namespace GraphIds {

const GraphId XIC_ID = "XIC";
const GraphId MASS_PEAK_ID = "MassPeak";

QString getHtmlContainerIdForGraph(const GraphId &id)
{
    if (id == XIC_ID) {
        return "xic_container";
    } else if (id == MASS_PEAK_ID) {
        return "mass_peak_container";
    } else {
        Q_ASSERT(false);
        return QString();
    }
}

}

namespace ExportFormats {

const QList<FormatId> lossyImageFormats = QList<FormatId>() << "Clipboard" << "PNG" << "JPG";
const QList<FormatId> losslessImageFormats = QList<FormatId>() << "BMP";
const QList<FormatId> resizableVectorImageFormats = QList<FormatId>() << "SVG";
const QList<FormatId> fixedSizeVectorImageFormats = QList<FormatId>() << "PDF";
const QList<FormatId> dataFormats = QList<FormatId>() << "CSV";

}

} // namespace
