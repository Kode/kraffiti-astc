let project = new Project('kraffiti-astc', __dirname);

project.dynlib = true;

project.addExclude('.git/**');
project.addExclude('build/**');

project.addFile('Sources/**');

project.addFile('astc-encoder/Source/**');
project.addExclude('astc-encoder/Source/exr_to_htga.cpp');
project.addExclude('astc-encoder/Source/imgdiff.cpp');
project.addExclude('astc-encoder/Source/astc_averages_and_directions_eigenvectors.cpp');
if (platform === Platform.Windows) {
	project.addIncludeDir('astc-encoder/Source/win32-2010/astcenc');
}

resolve(project);
