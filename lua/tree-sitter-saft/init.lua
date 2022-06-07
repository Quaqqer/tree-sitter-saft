local M = {
	_initialized = false,
}

function M.setup()
	if M._initialized then
		return
	end

	local parser_config = require("nvim-treesitter.parsers").get_parser_configs()

	parser_config.saft = {
		install_info = {
			url = "https://github.com/Quaqqer/tree-sitter-saft",
			files = { "src/parser.c" },
			branch = "main",
		},
		filetype = "saft",
		maintainers = { "@Quaqqer" },
	}
end

M.setup()

return M
