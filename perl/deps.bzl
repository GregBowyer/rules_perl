load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")
load("//perl:repo.bzl", _perl_download = "perl_download")

perl_download = _perl_download

def perl_register_toolchains():
    perl_download(
        name = "perl_linux_amd64",
        arch = "amd64",
        os = "linux",
        strip_prefix = "perl-x86_64-linux",
        sha256 = "2cea6d78bf29c96450a70729e94ae2ef877dbc590fdaf3ef8dad74f7fae0d7de",
        urls = [
            "https://github.com/skaji/relocatable-perl/releases/download/5.30.1.1/perl-x86_64-linux.tar.xz",
        ]
    )

    native.register_toolchains(
        "@perl_linux_amd64//:toolchain",
    )

def perl_rules_dependencies():
    """Declares external repositories that rules_go_simple depends on.
    This function should be loaded and called from WORKSPACE of any project
    that uses rules_go_simple.
    """

    # bazel_skylib is a set of libraries that are useful for writing
    # Bazel rules. We use it to handle quoting arguments in shell commands.
    _maybe(
        http_archive,
        name = "bazel_skylib",
        urls = [
            "https://mirror.bazel.build/github.com/bazelbuild/bazel-skylib/releases/download/1.0.2/bazel-skylib-1.0.2.tar.gz",
            "https://github.com/bazelbuild/bazel-skylib/releases/download/1.0.2/bazel-skylib-1.0.2.tar.gz",
        ],
        sha256 = "97e70364e9249702246c0e9444bccdc4b847bed1eb03c5a3ece4f83dfe6abc44",
    )

def _maybe(rule, name, **kwargs):
    """Declares an external repository if it hasn't been declared already."""
    if name not in native.existing_rules():
        rule(name = name, **kwargs)
