About PATH
==========

path is a small tool, aiming to provide a simple way to add a directory to your PATH environment variable on a variety of platforms. It is intended as a simple time-saver. 

Usage
-----

At present the usage is simple, but likely to change. The simplest examples (and most commonly used) are `path add .` and `path add /some/path/`.

	Usage: path [command [options] filename] 
	
		Running with no command or filename, shows this help message.
		
		Commands:
		
			add: Adds the given filename to the path.
			remove: Removes the filename from the path, iff it is there
		
		Filename:
		
			add: Adds the given filename to the path.
			remove: Removes the filename from the path, iff it is there
		
	

Contributing
------------

This project is something I find useful to have, and a good project to learn with. If this might also be useful for you, feel free to contribute. Any help is welcomed. 

### Work to be done

I aim to create a specification and method whereby simple functions all relating to one platform, such as `getCurrentPath()` are abstracted into a file, allowing others to easily add new supported platforms. 

Once this is ready, the main thing will be to get some common platforms written. 

Any suggestions for what else might be useful are of course welcome. 
