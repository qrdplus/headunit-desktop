#ifndef MEDIALIBRARY_H
#define MEDIALIBRARY_H

#include <QObject>
#include <QQmlListProperty>
#include <QVariant>

#include "mediascanner.h"
#include "mediadb.h"
class MediaLibrary : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QVariantMap audioFolders READ audioFolders CONSTANT)
    Q_PROPERTY(QVariantMap playlists READ playlists CONSTANT)
public:
    explicit MediaLibrary(QObject *parent = 0);
    const QVariantMap audioFolders();
    const QVariantMap playlists();
    Q_INVOKABLE QVariantMap audioFolderContent(int folder_id);
    Q_INVOKABLE QVariantMap videoFolderContent(int folder_id);
    Q_INVOKABLE QVariantMap albumContent(QString album);
    Q_INVOKABLE QVariantMap getAlbums();
    Q_INVOKABLE QVariantMap getArtists();
    Q_INVOKABLE QVariantMap getGenres();
    Q_INVOKABLE QVariantMap getPlaylists();
    Q_INVOKABLE QVariantMap getSongs();
    Q_INVOKABLE QVariantMap getAlbumContent(QString key);
    Q_INVOKABLE QVariantMap getArtistContent(QString key);
    Q_INVOKABLE QVariantMap getGenreContent(QString key);
    Q_INVOKABLE QVariantMap getPlaylistContent(QString key);
    Q_INVOKABLE QVariantMap getSongContent(QString key);
private:
    MediaScanner *mediaScanner;
    QVariantMap p_audioFolders;
    QVariantMap p_playlists;
signals:

public slots:
};

#endif // MEDIALIBRARY_H
