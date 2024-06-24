#include "databasemanager.h"

DatabaseManager::DatabaseManager() {}

DatabaseManager::~DatabaseManager() {
    if (db.isOpen()) {
        db.close();
    }
}

bool DatabaseManager::connect(const QString &dbName) {
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(dbName);

    if (!db.open()) {
        qDebug() << "Error: Unable to open database" << db.lastError().text();
        return false;
    }

    qDebug() << "Database connection established.";
    return true;
}

bool DatabaseManager::executeQuery(const QString &queryStr) {
    QSqlQuery query;
    if (!query.exec(queryStr)) {
        qDebug() << "Error: Unable to execute query" << query.lastError().text();
        return false;
    }

    return true;
}

QSqlQuery DatabaseManager::executeSelectQuery(const QString &queryStr) {
    QSqlQuery query;
    if (!query.exec(queryStr)) {
        qDebug() << "Error: Unable to execute query" << query.lastError().text();
    }
    return query;
}
