include(../../gcs.pri)

TEMPLATE = aux

DATACOLLECTIONS = vehicletemplates configurations dials models backgrounds pfd sounds diagrams mapicons stylesheets

equals(copydata, 1) {
    for(dir, DATACOLLECTIONS) {
        exists($$GCS_SOURCE_TREE/src/share/$$dir) {
            addCopyDirTarget($$dir, $$GCS_SOURCE_TREE/src/share, $$GCS_DATA_PATH)
        }
    }
}
