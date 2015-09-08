#BackEnd of Entertainment System

Using Slim Framework as a restful api server

##Notice

The urls listed below only works when the mod_rewrite module is set right to hide the 'index.php' route in the urls.

Search "Mod_Rewrite" to learn more.

##Database Schema

	'music_db'
		'id'
			int(10) unsigned zerofill NOT NULL , Auto Increase
			PRIMARY KEY
		'music_name'
			text
		'artist'
			text
		'album'
			text
		'url'
			text
		'count'
			int(11) NOT NULL , Default '1'

	'playlist'
		'id'
			int(10) unsigned zerofill NOT NULL , Auto Increase
			PRIMARY KEY
		'music_name'
			text
		'user'
			text
		'comment'
			text
		'url'
			text
		'enable'
			boolean NOT NULL , Default '1'

##API Docs

Search API

	method: post/get
	content-type: json
	url: 'api/search'
	{
		name: 'keyword-here',
		type: 'search-type'
	}


Music Information API

	method: post/get
	content-type: json
	url: 'api/music'
	{
		music: 'music-ID'
	}


Artist Information API

	method: post/get
	content-type: json
	url: 'api/artist'
	{
		artist: 'artist-ID'
	}

	
Album Information API

	method: post/get
	content-type: json
	url: 'api/album'
	{
		album: 'album-ID'
	}


Playlist API

	method: post/get
	content-type: json
	url: 'api/playlist'
	{
		none
	}


New Order API

	method: post (only)
	content-type: json
	url: 'api/new'
	{
		user: 'user_name',
		comment: 'comment-content',
		music_name: 'music-name',
		artist: 'artist-name',
		album: 'album-name',
		url: 'download-url'
	}


###To be continued