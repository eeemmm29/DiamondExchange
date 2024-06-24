#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QVariant>
#include <QDebug>

class DatabaseManager
{
public:
    DatabaseManager();
    ~DatabaseManager();

    bool connect(const QString &dbName);
    bool executeQuery(const QString &query);
    QSqlQuery executeSelectQuery(const QString &query);

private:
    QSqlDatabase db;
};

#endif // DATABASEMANAGER_H
